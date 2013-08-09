#include<iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t>0){
		long long sum=0;
		int N;
		long long a;
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>a;
			sum=(sum+a)%N;
		}
		if(sum==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		t--;
	}
	return 0;
}