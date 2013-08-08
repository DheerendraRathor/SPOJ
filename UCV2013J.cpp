#include<iostream>
#include<cmath>
using namespace std;

int foo(int n){
	for(int i=1;;i++){
		long long a=pow(2,i);
		if(a-1<=n&&a*2-1>n){
			if(n-a+1==0)return n-a/2+1;
			else {
				long long z=a/2-ceil((n-a+1)*1.0/2);
				//cout<<z<<" "<<a/2<<" "<<ceil((n-a+1)/2)<<" "<<n-a+1<<" ";
				return z+n-a+1;
			}
			
		}
	}
}

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		long long sum=0;
		int count=foo(n);
		//cout<<count<<endl;
		for(int i=0;i<n-count;i++){
			int a;
			cin>>a;
		}
		for(int i=0;i<count;i++){
			int a;
			cin>>a;
		
			sum+=a;
		}
		cout<<sum<<endl;
	}
	return 0;
}
