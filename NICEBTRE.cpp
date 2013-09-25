#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int height(string s,int* i)
{
	if(*i>=s.length())return 0;
	if(s[*i]=='l')return 0;
	*i=*i+1;
	int s1=height(s,i);
	*i=*i+1;
	int s2=height(s,i);
	return 1+max(s1,s2);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i=0;
		cout<<height(s,&i)<<endl;
	}
	return 0;
}