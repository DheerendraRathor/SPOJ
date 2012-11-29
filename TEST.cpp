#include <iostream>
using namespace std;
int main(){
	int i=0;
	int a[1000];
	for(i;i<1000;i++){
		int next;
		cin>>next;
		if(next!=42){
			a[i]=next;
		}
		else break;
	}
	for(int j=0;j<i;j++){
		cout<<a[j]<<endl;
	}
}
	
