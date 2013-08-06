#include<iostream>
#include<cmath>
using namespace std;

void foo(int n){
	double m=(1+sqrt(1+8*n))/2;
	int o=m;
	if(o==m)o=o-1;
	int diff=n-(o-1)*o/2-1;
	if(o%2==0){
		cout<<1+diff<<"/"<<o-diff;
	}
	else cout<<o-diff<<"/"<<1+diff;
}

int main(){
	int t;
	cin>>t;
	for(;t>0;t--){
		int n;
		cin>>n;
		cout<<"TERM "<<n<<" IS ";
		foo(n);
		cout<<endl;
	}
	return 0;
}
