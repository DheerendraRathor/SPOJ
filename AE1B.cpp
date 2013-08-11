#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define s(f) scanf("%d",&f)
int main(){
  
		int req;
		int n;
        s(n);
		int r;
		s(r);
        int s;
        s(s);
        req=r*s;
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
				printf("%d\n",n-j);
				break;
			}
		}
	return 0;
}