#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double dist(double a, double b, double c,double d){
	return sqrt(pow(a-c,2)+pow(b-d,2));
}

double x(double d,double r,double l){
	return (r*r-l*l/2+d*d)/(2*d);
}

double ans(double r,double x){
	return 2*sqrt(r*r-x*x);
}

int main(){
	int t;
	cin>>t;
	cout<<fixed;
	for(int i=1;i<=t;i++){
		double a,b,c,d,r,l;
		cin>>a>>b>>c>>d>>r>>l;
		double di=dist(a,b,c,d);
		cout<<i<<". ";
		if(di>=r+l/sqrt(2))cout<<"No problem"<<endl;
		else{
			double rep=ans(r,x(di,r,l));
			
			if(rep==0.0)cout<<"No problem"<<endl;
			else cout<<setprecision(3)<<rep<<endl;
		}
	}
	return 0;
}
