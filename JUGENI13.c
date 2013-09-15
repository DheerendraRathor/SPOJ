
#include<stdio.h>

long long p=1000000007;
long long store[202][202];
int compute(int n,int r)
{
long long ans;
if(r<0)
	return 0;
if(r==0)
return 1;
if(n==r)return 1;
if(store[n][r]!=0)
	return store[n][r];

ans = (compute(n-1,r-1)+compute(n-1,r))%p;
store[n][r]=ans;
return ans;
}

int main()
{
int t,n,r;
int i,j;
long long ans;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&r);

n=n-1;r=r-1;

	for(i=0;i<202;i++)
		for(j=0;j<202;j++)
			store[i][j]=0;
	for(i=0;i<202;i++)
		store[i][1]=i;
	
	ans = compute(n+r,r)%p;
	printf("%d\n",ans);	
}

return 0;
}
