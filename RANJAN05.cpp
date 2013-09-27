#include<cstdio>
int main(){
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	int* ans=new int[x+1];
	
	for(int i=1;i<=x;i++){
		if(i==a){
			ans[i]=0;
			continue;
		}
		int temp;
		scanf("%d",&temp);
		ans[i]=temp;
	}
	int temp=b;
	int match=ans[temp];
	while(match!=a)
	{
		int alpha=ans[match];
		ans[match]=temp;
		temp=match;
		match=alpha;
		if(match==a)break;
	}
	ans[match]=temp;
	for(int i=1;i<=x;i++){
		if(i==b)continue;
		printf("%d ",ans[i]);
	}
	return 0;
}

