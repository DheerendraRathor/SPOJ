#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

typedef unsigned long long mydata;
mydata n=10000000;

void foo(vector<mydata>& V, mydata num){
	for(mydata i=num;i<=n;i=i+num){
		if(V[i]==1)V[i]=num;
	}
	V[num]=1;

}

void make(vector<mydata>& V){
	mydata siz=V.size();
	for	(mydata i=0;i*i<=n;i++){
		if(V[i]==1)foo(V,i);
	}
}

 int main(){
	vector<mydata>v(n,1);
	v[0]=0;
	v[1]=0;
	make(v);
	for(int i=2;i<n;i++){
		if(v[i]==1){
			v[i]=i+v[i-1];
		}
		else v[i]=v[i]+v[i-1];
	}
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		mydata a;
		scanf("%lld",&a);
		//mydata alpha=check(a,answer);
		printf("%lld\n",v[a]);
	}
	return 0;
}
