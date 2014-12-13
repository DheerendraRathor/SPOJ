#include <iostream>
#include <string>
using namespace std;

int main(){
	int test;
	size_t pos;
	string a,b;
	cin>>test;
	while(test--){
		cin>>a>>b;
		a = a+a;
		pos = a.find(b);
		if (pos != string::npos){
			cout<<"Si"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}