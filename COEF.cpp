#include<cstdio>
using namespace std;

int main(){
    int fact[13];
	fact[0]=1;
	for(int i=1;i<13;i++){
		fact[i]=fact[i-1]*i;
	}
	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF){
		int ans=fact[n];
		for(int i=0;i<k;i++){
			int a;
			scanf("%d",&a);
			ans/=fact[a];
		}
		printf("%d\n",ans);
	}
	return 0;
}