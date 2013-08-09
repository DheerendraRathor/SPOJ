#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
	vector<int>v;
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		printf("%d\n",v[i]);
	}
	return 0;
}
