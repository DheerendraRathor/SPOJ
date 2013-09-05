#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int t=1;
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int ans=pow(n,n-2);
		printf("Case %d, N = %d, # of different labelings = %d\n",t,n,ans);
		t++;
		}
	return 0;
}