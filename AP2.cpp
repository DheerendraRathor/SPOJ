#include<iostream>
using namespace std;
 
void foo(long long a,long long b,long long c){
	long long term=2*c/(a+b);
	long long diff= (a-b)/(5-term);
	long long first= a-2*diff;
	cout<<term<<endl;
	for(long long i=0;i<term;i++){
		cout<<first<<" ";
		first=first+diff;
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	for(;n>0;n--){
		long long term;
		long long lastterm;
		long long sum;
		cin>>term>>lastterm>>sum;
		foo(term,lastterm,sum);
	}
	return 0;
}

