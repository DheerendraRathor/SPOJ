#include <iostream>

using namespace std;

long long int ans(long long int n, long long int k){
long long int a, b = 1;
a = n;
if(k == 1)
return a;
else{
while(k > 1){
if(k%2 != 0) 
b = (b*a)%10000007;
a = (a*a)%10000007;
k = k/2;
}
a = (a*b)%10000007;
}
return a;
}

int main(){
int i;
long long int n, k, a1, b, c, d, e;
cin >> n >> k;
while(n != 0 || k != 0){
a1 = ans(n-1, k);
b = ans(n, k);
c = ans(n-1, n-1);
d = ans(n, n);
e = (2*a1 + b + 2*c + d)%10000007;
cout << e << endl;
cin >> n >> k;
}
return 0;
}