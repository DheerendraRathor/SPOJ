#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int si=s.length();
		bool check=true;
		for(int i=0;i<si/2;i++)
		{
			if(s[i]!=s[si-i-1]){check=false;break;}
		}
		if(check)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}