#include<iostream>
#include<cmath>
using namespace std;
int mmm=1000000007;
long long foo(int a,int b){
	//if(b==0)return 1;
	if(b==1)return a%mmm;
	int m=b/2;
	int n=b%2;
	long long c=foo(a,m);
	if(n==0){
		return ((c%mmm)*(c%mmm))%mmm;
	}
	return ((((c%mmm)*(c%mmm))%mmm)*(a%mmm))%mmm;
}

long long goo(long long a,long long b){
	return (a%mmm+b%mmm)%mmm;
}

int main(){
	while(1){
		int n;
		int l;
		cin>>n>>l;
		long long counter=0;
		if(n==0)break;
		for(int i=1;i<=l;i++){
			counter+=foo(n,i);
		}
		cout<<counter%mmm<<endl;
	}
	return 0;
}
