#include<iostream>
using namespace std;
 
long long comb(long long n, long long r)
{
    if(n==r)
       return 1;
    return comb(n-1,r)*n/(n-r);
}
 
int main()
{
	int t; cin>>t;
	for(;t>0;t--)
	{
		int n, k;
		cin>>n>>k;
		n--; k--;
		k = max( k, n-k );
		printf("%lld\n", comb( n, k ) );
	}
	
	return 0;
}
