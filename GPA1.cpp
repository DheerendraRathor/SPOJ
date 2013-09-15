#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

double stdi(const string& s )
 {
   istringstream i(s);
   double x;
   if (!(i >> x))return 0;
   return x;
 }
 
int gp(double a,double b,double c,double endsem,double att)
{
	double quiz=a+b+c-min(min(a,b),c);
	quiz=(quiz*45.0)/40;
	if(att<51)att=5;
	else if(att<61)att=4;
	else if(att<71)att=3;
	else if(att<81)att=2;
	else if(att<91)att=1;
	else att=0;
	double marks=quiz+att+endsem/2.0;
	if(marks>=91)return 10;
	if(marks>=81)return 9;
	if(marks>=71)return 8;
	if(marks>=61)return 7;
	if(marks>=50)return 6;
	if(marks==50)return 5;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--)
	{
		double cre[6];
		double sum=0.0;
		double cgpa=0.0;
		bool faled=0;
		for(int i=0;i<6;i++)
		{
			scanf("%lf",&cre[i]);
			sum+=cre[i];
		}
		int j;
		for(j=0;j<6;j++)
		{
			string a,b,c;
			cin>>a>>b>>c;
			double endsem,att;
			cin>>endsem>>att;
			double aa=stdi(a),bb=stdi(b),cc=stdi(c);
			int gpa=gp(aa,bb,cc,endsem,att);
			if(gpa==0)faled=1;
			cgpa+=gpa*cre[j];
		}
		if(faled)printf("FAILED, ");
		else printf("PASSED, ");
		printf("%.2lf\n",cgpa/sum);
	}
	return 0;
}
