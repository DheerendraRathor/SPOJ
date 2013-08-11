#include<cstdio>
#include<cmath>
using namespace std;
#define sl(a) scanf("%lld",&a)
#define s(a) scanf("%d",&a)
typedef long long ll;
#define d(x,y,z) sqrt(x*x+y*y+2*y*z)
int main(){
    int t;
	s(t);
	while(t--){
		ll x,y,z;
		sl(x);sl(y);sl(z);
		double some=z*d(x,y,z);
		double root=(x*z+some)*1.0/(y+2*z);
		if(root-ll(root))printf("Not this time.\n");
		else printf("%lld\n",ll(root));
	}
	return 0;
}