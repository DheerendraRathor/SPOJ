#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	while(1){
		int r;
		int n;
		cin>>r>>n;
		if(r==0)break;
		double ang=M_PI/(2*n);
		cout<<fixed<<setprecision(2)<<r/sin(ang)<<endl;
	}
	return 0;
}