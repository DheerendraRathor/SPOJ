#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (a < b){
		return gcd(a,b % a);
	}
	if (b == 0){
		return a;
	}
	return gcd(b,a % b);
}

int main(){
	ios_base::sync_with_stdio(false);
	int t,a,b,c,i, temp;
	cin>>t;
	for (i = 1; i<=t; i++){
		cin>>a>>b>>c;
		cout<<"Case "<<i<<": ";
		if (c % gcd(a,b) == 0){
			cout<<"Yes"<<'\n';
		}
		else cout<<"No"<<'\n';
	}
	return 0;
}