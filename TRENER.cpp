#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	map<char,int>m;
	int n;
	cin>>n;
	vector<char>ans;
	while(n--){
		string s;
		cin>>s;
		m[s[0]]+=1;
		if(m[s[0]]>=5){
			ans.push_back(s[0]);
			m[s[0]]=-234;
		}
	}
	if(ans.size()!=0){
	sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
	}
	else cout<<"PREDAJA";
	return 0;
}

