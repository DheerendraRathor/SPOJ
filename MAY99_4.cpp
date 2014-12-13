#include <iostream>
using namespace std;

#define mod 10000007

int mod_expo(int base, int expo){
	long long result = 1ll;
	long long p = base, q = expo;
	while(q > 0){
		if (q % 2 == 1){
			result = (result * p) % mod;
		}

		q = q >> 1;
		p = (p * p) % mod;
	}
	int x = result;
	return x;

}

int main(){
	int n,k,i,q,p,m,total_prime_power,r;
	long long ans = 1ll;
	bool* composite;
	int* prime_power;
	cin>>n>>k;
	if (n < k){
		cout<<-1<<endl;
		return 0;
	}
	n = n-1;
	k = k -1;

	composite = new bool[n+2];
	composite[0] = true;
	composite[1] = true;

	for (i = 0; i<n; i++){
		composite[i+2] = false;
	}

	for (p = 0; p <= n; p++){
		if (composite[p]){
			continue;
		}

		q = p;
		m = 1;
		total_prime_power = 0;
		prime_power = new int[n+1];
		for (i = 0; i< n+1; i++){
			prime_power[i] = 0;
		}

		while(1){
			prime_power[q] = prime_power[m] + 1;
			r = q;

			if (q <= k){
				total_prime_power -= prime_power[q];
			}

			if (q > n-k){
				total_prime_power += prime_power[q];
			}

			m += 1;
			q += p;

			if (q > n){
				break;
			}

			composite[q] = true;
		}

		ans = (ans * mod_expo(p, total_prime_power)) % mod;
	}
	cout<<ans<<endl;
}