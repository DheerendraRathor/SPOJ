#include <iostream>
using namespace std;

#define MAX_N 100001
#define mod 1000000007

int val[MAX_N];

void populate(){
	val[1] = 1;
	val[2] = 3;
	int tempi, i;
	long long temp, ult, preult;
	ult = 1ll;
	preult = 3ll;
	for (i = 3; i<= MAX_N; i++){
		temp = (preult - ult) * 4;
		tempi = ((temp % mod) + mod) % mod;
		ult = preult;
		preult = tempi;
		val[i] = preult;
	}
}

int main(){
	populate();
	int t,n, i;
	cin>>t;
	for (i = 1; i<= t; i++){
		cin>>n;
		cout<<"Case "<<i<<": "<<val[n]<<endl;
	}
	return 0;
}