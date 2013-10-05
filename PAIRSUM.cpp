#include<iostream>
#include<cstdio>
using namespace std;
#define s(a) scanf("%d",&a);
typedef unsigned long long ull;
struct data{
	int val;
	ull sum;
	ull ek;
};

int main(){
	int n;
	s(n);
	data* arr = new data[n];
	int count=0;
	ull sum=0;
	ull ek=0;
	while(n--){
		int temp;
		s(temp);
		data d;
		d.val=temp;
		d.sum=sum;
		d.ek=ek;
		sum+=temp;
		ek+=temp*temp;
		arr[count++]=d;
	}
	int m;
	s(m);
	while(m--){
		int u,v;
		s(u);s(v);
		ull summ=arr[v].val+arr[v].sum-arr[u].sum;
		ull ekk=arr[v].val*arr[v].val + arr[v].ek - arr[u].ek;
		ull ans=(summ*summ+ekk)/2;
		printf("%llu\n",ans);
	}
	delete[] arr;
	return 0;
}
