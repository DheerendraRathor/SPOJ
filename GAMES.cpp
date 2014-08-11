#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a==0 || b==0){
		return a == 0 ? b : a;
	}
	if (a >= b) return gcd (a%b,b);
	return gcd(b,a);
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		int inp = 0;
		int fac = 1;
		string s;
		cin>>s;
		for (int i=0;i<s.length();i++) 
		{
			if (s[i] == '.') {
				flag = true;
			}
			if (flag) {
				if (s[i]!='.'){
					inp = inp*10 + s[i] - '0';
					fac *= 10;
				}
			}
		}
		cout<<fac/gcd(fac,inp)<<endl;
	}
	return 0;


}
