#include<cstdio>
#define N 1000000
int next(int n){
	int temp=n;
	while(n!=0){
		temp+=n%10;
		n=n/10;
	}
	return temp;
}

bool dev[N];
int main(){
	for(int i=0;i<N;i++)dev[i]=1;
	
	for(int i=1;i<N;i++){
		if(dev[i]){
			for(int j=next(i);j<N&&dev[j];j=next(j)){
				dev[j]=0;
			}
			printf("%d\n",i);
		}
	}

	return 0;
}
