#include <cstdio>
#include <algorithm>
#include<vector>
using namespace std;

typedef long long ll;
vector<ll>sum(300001,0);

int main() {
    int n, m;
	ll res=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
        int a;
		scanf("%d",&a);
		sum[i]=sum[i-1]+a;
	}
    int j;
	for(int i=1;i<=n;i++) {
		j = (upper_bound(sum.begin()+i,sum.begin()+n+1,sum[i-1]+m)-sum.begin())-1;
		if(j >= i) res = max(res,sum[j]-sum[i-1]);
	}
	printf("%lld\n", res);
	return 0;
}