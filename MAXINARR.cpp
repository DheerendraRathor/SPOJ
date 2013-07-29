#include<iostream>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		int arr[n];
		int max=-1000000000;
		for(int i=0;i<n;i++){
			int m;
			cin>>m;
			if(m>=max)max=m;
		}
		cout<<max<<endl;
	}
	return 0;
}
			
