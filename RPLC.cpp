#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		long long curr=0;
		long long last=0;
		while(n--){
			long long temp;
			scanf("%lld",&temp);
			curr+=temp;
			//if(temp<0)last=curr;
            if(curr<0){
                last+=-1*curr;
                curr=0;
            }
		}
        printf("%s%d%s","Scenario #",i,": ");
		printf("%lld\n",last+1);
	}
	return 0;
}
