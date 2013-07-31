#include<iostream>
#include<string>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
int n;
cin>>n;
string s;
cin>>s;
s.erase (s.begin()+n-1);
cout<<i<<" "<<s<<endl;
}
return 0;
}

