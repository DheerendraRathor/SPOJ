#include<iostream>
#include<string>
#include<vector>
using namespace std;

void ma(string a, string b,vector<int>& v){
	int as=a.length();
	int bs=b.length();
	int carry=0;
	for(int i=bs-1;i>=0;i--){
		if(b[i]=='5')b[i]='6';
		if(a[i+as-bs]=='5')a[i+as-bs]='6';
		int dummy=b[i]+a[i+as-bs]+carry-96;
		int q=dummy%10;
		carry=dummy/10;
		v.push_back(q);
	}
	for(int i=as-bs-1;i>=0;i--){
		if(a[i]=='5')a[i]='6';
		int dummy=a[i]+carry-48;
		int q=dummy%10;
		carry=dummy/10;
		v.push_back(q);
	}
	if(carry!=0)v.push_back(carry);
}
void mi(string a, string b,vector<int>& v){
	int as=a.length();
	int bs=b.length();
	int carry=0;
	for(int i=bs-1;i>=0;i--){
		if(b[i]=='6')b[i]='5';
		if(a[i+as-bs]=='6')a[i+as-bs]='5';
		int dummy=b[i]+a[i+as-bs]+carry-96;
		int q=dummy%10;
		carry=dummy/10;
		v.push_back(q);
	}
	for(int i=as-bs-1;i>=0;i--){
		if(a[i]=='6')a[i]='5';
		int dummy=a[i]+carry-48;
		int q=dummy%10;
		carry=dummy/10;
		v.push_back(q);
	}
	if(carry!=0)v.push_back(carry);
}

int main(){
		string a,b;
		cin>>a;
		cin>>b;
		vector<int>a1;
		vector<int>b1;
		if(a.size()>b.size()){
			ma(a,b,b1);
			mi(a,b,a1);}
			else { ma(b,a,b1);mi(b,a,a1);}
		for(int i=a1.size()-1;i>=0;i--){
			cout<<a1[i];
			}
		cout<<" ";
		for(int i=b1.size()-1;i>=0;i--){
			cout<<b1[i];
			}
		cout<<endl;
		
	return 0;
	}
