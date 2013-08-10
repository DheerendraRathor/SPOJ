#include<iostream>
using namespace std;
int mmm=314159;
long long foo(int a,int b){
    if(b==0)return 1;
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

long long hoo(int n){
	long long sum;
	sum=goo(foo(10,n-1)*5,foo(8,n-1)*4);
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<hoo(n)<<endl;
	}
	return 0;
}
