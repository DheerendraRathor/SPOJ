#include<cstdio>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}

ll lcm(ll a,ll b){
	ll theta=gcd(a,b);
	return (a/theta)*b/theta;
}

int main(){
	while(1){
		ll a,b;
		scanf("%lld %lld",&a,&b);
		if(a==0)break;
		printf("%lld\n",lcm(a,b));
	}
	return 0;
}
