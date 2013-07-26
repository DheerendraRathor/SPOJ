#include<iostream>
#include<cmath>
using namespace std;

typedef long long mydata;

int trail(mydata num){
	mydata product=5;
	int count=0;
	if(num<5)return count;
	else {
		for(int i=1;product<=num;i++){
			count=count+(num/product);
			product  *= 5;
		}
		return count;
	}
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		mydata n;
		cin>>n;
		cout<<trail(n)<<endl;
	}
	
	return 0;
}


