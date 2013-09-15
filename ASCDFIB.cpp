#include<iostream>
#include<cstdio>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int fibo[1100001];


		
int main(){
	fibo[0]=0;
fibo[1]=0;
fibo[2]=1;
	for(int i=3;i<1100001;i++)fibo[i]=(fibo[i-1]+fibo[i-2])%100000;
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int check[100000];
		for(int j=0;j<100000;j++)check[j]=0;
		int a,b;
		scanf("%d%d",&a,&b);
		printf("Case %d: ",i);
		for(int j=a;j<=a+b;j++)
		{
			check[fibo[j]]++;
		}
		int count=0;
		for(int j=0;j<100000&&count<=100;j++)
		{
			for(int k=0;k<check[j]&&count<100;k++)
			{
				printf("%d ",j);
				count++;
			}
		}
		printf("\n");
	}
	return 0;
}

