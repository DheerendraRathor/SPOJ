#include<stdio.h>

unsigned long long two[50],four[50],six[50];
unsigned long long foo(int i, int j){
	if(i==2){
		if(two[j-1]==-1)
		two[j-1]=foo(2,j-1) + foo(4,j-1);
		return two[j-1];
	}
	if(i==4){
		if(four[j-1]==-1)
		four[j-1]=foo(4,j-1) + foo(2,j-1) + foo(6,j-1);
		return four[j-1];
	}
	if(i==6){
		if(six[j-1]==-1)
		six[j-1]=foo(6,j-1) + foo(4,j-1);
		return six[j-1];
	}
}

int main(){
	int t,n,i;
	unsigned long long temp;
	scanf("%d",&t);
	for(i=0;i<50;i++){
		two[i]=four[i]=six[i]=-1;
	}
	two[0]=four[0]=six[0]=1;
	foo(2,50);foo(4,50);foo(6,50);
	while(t--){
		scanf("%d",&n);
		temp=two[n-1]+four[n-1]+six[n-1];
		printf("%llu\n",temp);
	}
	return 0;
}
		
			
		
