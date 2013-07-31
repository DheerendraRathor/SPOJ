#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		long long n;
		cin>>n;
		if(n%2==0){
			unsigned long long dat=((n-2)/2)*((n-2)/2);
			cout<<dat%n<<endl;
		}
		else {
			unsigned long long dat=((n-1)/2)*((n-1)/2);
			cout<<dat%n<<endl;
		}
	}
	return 0;
}
		

	
