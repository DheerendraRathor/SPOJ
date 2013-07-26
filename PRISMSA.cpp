#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double k=6.5467418158;

int main(){
	int t;
	cin>>t;
	cout<<fixed;
	for(t;t>0;t--){
		double V;
		cin>>V;
		cout<<setprecision(10)<<k*pow(V,2.0/3)<<endl;
	}
	return 0;
}

