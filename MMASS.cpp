#include<iostream>
#include<stack>
#include<string>
using namespace std;

int massbata(char c)
{
    switch(c)
	{
		case 'C':return 12;
		case 'H':return 1;
		case 'O':return 16;
	}
}

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	stack<int> mass;
	for(int i=0; i<len; i++)
	{
		if(s[i]<='9'&&s[i]>'1')
		{
			mass.top()*=(s[i]-48);
		}
		else if(s[i]=='(')
		{
			mass.push(0);
		}
		else if(s[i]==')')
		{
			int sum=0;
			while(mass.top()!=0)
			{
				int n=mass.top();
				sum+=n;
				mass.pop();
			}
			mass.pop();
			mass.push(sum);
		}
		else
		{
			int mas=massbata(s[i]);
			mass.push(mas);
		}
	}
	int ans=0;
	while(!mass.empty())
	{
		ans+=mass.top();
		mass.pop();
	}
	cout<<ans<<endl;
	return 0;
}
