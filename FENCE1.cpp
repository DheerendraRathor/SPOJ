#include<iostream>
#include<iomanip>
using namespace std;

#define PI 3.14159

int main(){
	cout<<fixed;
	while(1){
		double a;
		cin>>a;
		if(a==0)break;
		cout<<setprecision(2)<<a*a/(2*PI)<<endl;
		}
	return 0;
}
		
