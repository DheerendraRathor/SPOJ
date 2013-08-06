#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define PI 3.14159
#define G 9.806

void check(int dis,int speed){
	double theta = 0.5*asin(dis*G*1.0/(speed*speed));
	double angle=(180.0*theta)/PI;
	if(angle>45.0||angle<0||isnan(angle))cout<<-1;
	else cout<<fixed<<setprecision(2)<<angle;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int ta,sp;
		cin>>ta>>sp;
		cout<<"Scenario #"<<i<<": ";
		check(ta,sp);
		cout<<endl;
	}
	return 0;
}
