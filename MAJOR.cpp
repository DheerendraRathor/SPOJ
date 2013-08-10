#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<int>kuch(2001,0);
		bool check=1;
		int some=n/2+1;
		while(n--){
			int a;
			scanf("%d",&a);
			kuch[a+1000]++;
			if(kuch[a+1000]>=some){
				printf("YES %d\n",a);
				check=false;
				kuch[a+1000]=-100000000;
			}
		}
		if(check)printf("NO\n");
	}
	return 0;
}
			
			


