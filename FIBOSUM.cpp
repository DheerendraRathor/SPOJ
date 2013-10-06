#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const long long base[2][2] = {{1, 1}, {1, 0}}, unit[2][2] = {{1, 0}, {0, 1}};
int m=1000000007;

void mul(long long a[2][2], long long b[2][2], long long mod) {
	int i, j, k;
	long long c[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=0;
			for(int k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
				if(c[i][j]>=mod)c[i][j]%=mod;
			}
		}
	}
	a[0][0]=c[0][0];
	a[0][1]=c[0][1];
	a[1][0]=c[1][0];
	a[1][1]=c[1][1];
}

void exp(long long res[2][2],long long p,long long mod) {
	long long b[2][2];
	res[0][0]=unit[0][0];
	res[0][1]=unit[0][1];
	res[1][0]=unit[1][0];
	res[1][1]=unit[1][1];
	b[0][0]=base[0][0];
	b[0][1]=base[0][1];
	b[1][0]=base[1][0];
	b[1][1]=base[1][1];
	while(p>0) {
		if(p&1)mul(res,b,mod);
		mul(b,b,mod);
		p=p/2;
	}
}

long long fib(long long n, long long mod) {
	long long res[2][2];
	if(!n) return 0;
	exp(res, n - 1, mod);
	return res[0][0];
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		long long n,m1;
		scanf("%lld %lld", &n, &m1);
		long long res = (fib(m1+2, m)-fib(n+1,m)) % m;
		if(res < 0) res += m;
		printf("%lld\n", res);
	}
	return 0;
}
