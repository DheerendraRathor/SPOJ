#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
	return gcd(b,a%b);
}

int count(int a,int b){
	int coun=0;
	double x=sqrt(gcd(a,b));
	for(int i=1;i<=x;i++){
		if(a%i==0&&b%i==0)coun++;
	}
	if(x==floor(x))return 2*coun-1;
    return 2*coun;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		printf("%d\n",count(a,b));
	}
	return 0;
}

