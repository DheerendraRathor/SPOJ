#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define s(f) scanf("%d",&f)
int main(){
    int t;
	s(t);
	for(int i=1;i<=t;i++){
		int req;
		s(req);
		int n;
		s(n);
		vector<int>num;
		for(int j=0;j<n;j++){
			int a;
			s(a);
			num.push_back(a);
		}
		sort(num.begin(),num.end());
		int sum=0;
        bool check=true;
		for(int j=n-1;j>=0;j--){
			sum+=num[j];
			if(sum>=req){
				printf("Scenario #%d:\n%d\n\n",i,n-j);
                check=false;
				break;
			}
		}
        if(check)printf("Scenario #%d:\nimpossible\n\n",i);
	}
	return 0;
}