#include<iostream>
#include<iomanip>
using namespace std;

double ans(int n){
	double add=0;
	for(int i=1;i<=n;i++){
		add=add+1.0/i;
	}
	return add*n;
}

int main(){
	int t;
	cin>>t;
	cout<<fixed;
	for(t;t>0;t--){
		int n;
		cin>>n;
		cout<<setprecision(2)<<ans(n)<<endl;
	}
return 0;
}

