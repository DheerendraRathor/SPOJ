#include <iostream>
#include <algorithm>
using namespace std;

int lpr(string a, string b){
	int i=0;
	for (; i< a.length() && i<b.length();i++){
		if (a[i]!=b[i]) break;
	}
	//cout<<i<<endl;
	return i;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		string* suffix = new string[len];
		for (int i=0; i< len; i++){
			suffix[i] = s.substr(i);
		}
		sort(suffix, suffix+len);
		string prev = "";
		int ans = 0;
		for (int i=0; i< len; i++){
			ans= ans + suffix[i].length() - lpr(prev, suffix[i]);
			prev = suffix[i];
		}
		cout<<ans<<endl;

	}
	return 0;
}