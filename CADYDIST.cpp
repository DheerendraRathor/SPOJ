#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    while(1){
    	long long n;
		scanf("%lld",&n);
		if(n==0)break;
		vector<long long>num;
		vector<long long>price;
		long long sum=0;
		for(long long i=0;i<n;i++){
			long long a;
			scanf("%lldd",&a);
			num.push_back(a);
		}
		sort(num.begin(),num.end());
		for(long long i=0;i<n;i++){
			long long a;
			scanf("%lld",&a);
			price.push_back(a);
		}
		sort(price.begin(),price.end());
		for(long long i=0;i<n;i++){
			sum+=price[i]*num[n-i-1];
		}
		printf("%lld\n",sum);
	}
	return 0;
}
