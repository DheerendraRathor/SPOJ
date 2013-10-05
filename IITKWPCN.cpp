#include<cstdio>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if(b%2==1)printf("1.000000\n");
		else printf("0.000000\n");
	}
	return 0;
}