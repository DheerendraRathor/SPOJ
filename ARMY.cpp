#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		int a,b;
		cin>>a;
		cin>>b;
		int g=0,mg=0;
		for(a;a>0;a--){
			int d;
			cin>>d;
			if(d>g)g=d;
		}
		for(b;b>0;b--){
			int d;
			cin>>d;
			if(d>mg)mg=d;
		}
		if(g>=mg)cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
