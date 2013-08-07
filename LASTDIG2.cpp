#include<iostream>
#include<string>
using namespace std;

int foo(int n,long long b){
	if(n==0||n==1) return n;
	int m=b%2;
	if(b==0) return 1;
	if(b==1)return n;
	if(b==2){
		return (n*n)%10;
	}
	else {
		if(m==0){
			return foo(foo(n,2),b/2);
		}

		return (foo(foo(n,2),b/2)*n)%10;
	}
}

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		string n;
		long long b;
		
		cin>>n>>b;
		cout<<foo(n[n.length()-1]-48,b)<<endl;
	}
	return 0;
}


