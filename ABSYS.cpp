#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool haschar(string a){
	if(a.find('m')==string::npos)return false;
	return true;
}

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		string fn,sn,tn;
		char c1,c2;
		cin>>fn>>c1>>sn>>c2>>tn;
		int a,b,c;
		int pos;
		istringstream(fn)>>a;
		istringstream(sn)>>b;
		istringstream(tn)>>c;
		if(haschar(fn)){cout<<c-b<<" + "<<b<<" = "<<c<<endl;}
		else if(haschar(sn))cout<<a<<" + "<<c-a<<" = "<<c<<endl;
		else cout<<a<<" + "<<b<<" = " <<a+b<<endl;
	}
	return 0;
}
		
