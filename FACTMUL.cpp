#include<iostream>
#include<cmath>
#include<time.h>
#include<cstdio>
using namespace std;
//clock_t start=clock();
//long long mmm=109546051211;
long long goo(const long long,const long long,const long long);

long long goo(const long long a,const long long b,const long long mmm){
	if(b==1)return a;
	if(b==0)return 0;
	//if(a==0)cout<<a<<endl;
	//cout<<a<<" "<<b<<endl;
	long long m=b/1000000;
	long long n=b%1000000;
	//cout<<m<<" "<<n<<endl;
	if(n==0)return goo((a*1000000)%mmm,m,mmm);
	else
	{
		return (goo((a*1000000)%mmm,m,mmm)+(a*n))%mmm;
	}
}

long long fact[587117];
long long ans[587117];

int main(){	
	fact[0]=1;
ans[0]=1;
		for(int i=1;i<587117;i++)
		{
			long long temp=goo(fact[i-1],i,109546051211);
			fact[i]=temp;
			ans[i]=goo(ans[i-1],fact[i],109546051211);
		}
		
	    int n;
		scanf("%d",&n);
		if(n<587117)
		{
		//long long counter=1;
		//for(int i=2,j=n-1;i<=n;i++,j--){
			//long long some=foo(i,j,109546051211);
			//if(!some)cout<<i<<" "<<j<<'\n';
			//counter=goo(counter,some,109546051211);
			
		
		printf("%lld\n",ans[n]);
		
	}
	else cout<<0<<'\n';
		//cout<<foo(32,969);
		// cout<<((float)(clock()-start))/CLOCKS_PER_SEC<<endl;
	return 0;
}

