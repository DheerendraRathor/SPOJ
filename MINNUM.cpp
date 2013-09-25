#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool sum1(vector<int>& v)
{
	for(int i=v.size()-1;i>=0;i--)
	{
		if(v[i]==9)v[i]=0;
		else {
			v[i]++;
			return 0;
		}
	}
	return 1;
}

int main(){
	while(1){
		string s;
		cin>>s;
		if(s[0]=='-')break;
		vector<int>v;
		int a=0;
		bool check=0;
		for(int i=0;i<s.length();i++)
		{
			if(a/9!=0)check=1;
			if(check)v.push_back(a/9);
			a%=9;
			a=a*10+s[i]-48;
		}
		if(a/9!=0)check=1;
		if(check)v.push_back(a/9);
		a=a%9;
		//for(int i=0;i<v.size();i++)cout<<v[i];
		if(a){
			bool val=sum1(v);
			if(val){
				cout<<1;
				for(int i=0;i<v.size();i++)cout<<v[i];
				cout<<endl;
			}
			else {for(int i=0;i<v.size();i++)cout<<v[i];cout<<endl;}
		}
		else if(v.size()==0)cout<<0<<endl;
		else {for(int i=0;i<v.size();i++)cout<<v[i];cout<<endl;}
	}
	return 0;
}
