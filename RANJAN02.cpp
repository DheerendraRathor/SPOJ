#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
	cin>>t;
	for(t;t>0;t--){
		int n;
		cin>>n;
		unsigned long long dat;
        if(n>2){
            dat=pow(3,n-2);
            cout<<dat*9-1<<endl;
        }
        else cout<<pow(3,n)-1<<endl;
		
		}
	return 0;
}
