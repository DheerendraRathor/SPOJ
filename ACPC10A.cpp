#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0)break;
		int d=b-a;
		int e=c-b;
		if(d==e){
			cout<<"AP "<<c+d<<endl;
		}
		else {
			cout<<"GP "<<c*b/a<<endl;
		}
	}
	return 0;
}
