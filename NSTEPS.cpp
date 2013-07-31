#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		int x,y;
		cin>>x>>y;
		if(x==y){
			if(x%2==0)cout<<x+y<<endl;
			else cout<<x+y-1<<endl;
		}
		else if(y==x-2){
			if(x%2==0)cout<<x+y<<endl;
			else cout<<x+y-1<<endl;
		}
		else cout<<"No Number"<<endl;
	}
	return 0;
}
