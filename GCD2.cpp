#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int modu(string s,int b){
	int a=0;
	for(int i=0;i<s.length();i++)
	{
		a%=b;
		a=a*10+s[i]-48;
	}
	a=a%b;
	return a;
}
	
bool gcdd(string& a,int* b){
	if(*b==0)return 0;
	int al=*b;
	int temp=modu(a,al);
	*b=gcd(al,temp);
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		int b;
		scanf("%d",&b);
		cin>>a;
		bool ans=gcdd(a,&b);
		if(!ans)cout<<a<<endl;
		else printf("%d\n",b);
	}
	return 0;
}
