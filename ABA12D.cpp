#include<iostream>
using namespace std;

long kn[]={2,
4,
9,
16,
25,
64,
289,
729,
1681,
2401,
3481,
4096,
5041,
7921,
10201,
15625,
17161,
27889,
28561,
29929,
65536,
83521,
85849,
146689,
262144,
279841,
458329,
491401,
531441,
552049,
579121,
597529,
683929,
703921,
707281,
734449,
829921};


/* long sum_div(long x){
	long sum=0;
	for(int i=1;i*i<=x;i++){
		if(x%i==0){
			if(i*i==x)sum=sum+i;
			else sum=sum+i+x/i;
		}
	}
	return sum;
}

bool prime(long n){
	if(n==1)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
*/

int main(){
	int n;
	cin>>n;
	for(n;n>0;n--){
		long a,b;
		cin>>a>>b;
		int count=0;
		for(int i=0;i<37&&kn[i]<=b;i++){
			if(kn[i]>=a)count++;
		}
		cout<<count<<endl;		
	}
	return 0;
}



