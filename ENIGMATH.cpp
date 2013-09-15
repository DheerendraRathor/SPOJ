#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;
typedef long long ll;
#define FOR(n) for (int i=0;i<n;i++)
#define pb(n) push_back(n);

int gcd(int i,int j)
{
	if(j==0)return i;
	return gcd(j,i%j);
}

void lf(int* i,int* j)
{
	int alpha=gcd(*i,*j);
	while(alpha!=1)
	{
		*i=*i/alpha;
		*j=*j/alpha;
		alpha=gcd(*i,*j);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		cin>>i>>j;
		lf(&i,&j);
		cout<<j<<" "<<i<<endl;
	}
	return 0;
}
