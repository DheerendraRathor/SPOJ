#include<cstdio>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		long long ans=0;
		int count=0;
		while(n--){
			int temp;
			scanf("%d",&temp);
			if(temp==1||temp==-1){
				count+=1;
			}
			else if(temp==0);
			else {
				if(ans==0)ans=1;
				if(temp<0)ans=ans*temp*-1;
				else ans*=temp;
			}
		}
		if((ans+count)!=0)printf("-%lld\n",ans+count);
		else printf("0\n");
	}
	return 0;
}
			
