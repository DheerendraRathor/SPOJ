#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define N 1000001
bool cube[N];
int ans[N],counter=0;

void seive(){
	for(int i=0; i<N; i++)cube[i]=true;
	for (int i=2;i<=100;i++)
	{
		int temp=i*i*i;
		for (int j=temp; j<N; j+=temp)cube[j]=false;
	}
	for (int i=1;i<=N;i++)
	{
		if(cube[i])ans[counter++]=i;
	}
}

int main()
{
	seive();
	int t;
	scanf("%d",&t);
	for (int i=1; i<=t; i++)
	{
		int alpha;
		scanf("%d",&alpha);
		int ind=lower_bound(ans,ans+counter,alpha)-ans;
		//cout<<ans[ind]<<endl;
		if(ans[ind]==alpha)printf("Case %d: %d\n",i,ind+1);
		else printf("Case %d: Not Cube Free\n",i);
	}
	return 0;
}
