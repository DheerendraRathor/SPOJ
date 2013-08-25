#include<iostream>
using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}

long long ans(long long a,long long b)
{
	if(gcd(a,b)==1)return a;
	return ans(a-1,b);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a=ans(n/2,n);
		cout<<a<<endl;
	}
	return 0;
}
