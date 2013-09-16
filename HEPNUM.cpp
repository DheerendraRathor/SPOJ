#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;
typedef long long ll;
#define FOR(n) for (int i=0;i<n;i++)
#define pb(n) push_back(n);

void modify(string& a)
{
	for(int i=0;i<a.length();i++)
	{
		if(a[i]!='0'&&a[i]!=32)
		{
			a.erase(a.begin()+0,a.begin()+i);
			return;
		}
	}
	a.erase(a.begin()+0,a.end()-0);
}

char compare(string a,string b)
{
	if(a.length()==0&&a.length()==b.length())return '=';
	if(a.length()<b.length())return '<';
	if(a.length()>b.length())return '>';
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>b[i])return '>';
		if(a[i]<b[i])return '<';
	}
	return '=';
}
	


	
int main(){
	while(1)
	{
		string a,b;
		cin>>a>>b;
		if(a=="*")break;
		//cout<<a<<" "<<b<<endl;
		modify(a);modify(b);
		//cout<<a<<" "<<b<<endl;
		char ans=compare(a,b);
		cout<<ans<<'\n';
	}
	return 0;
}
