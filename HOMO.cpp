#include<iostream>
#include<tr1/unordered_map>
#include<string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,temp;
	string s;
	std::tr1::unordered_map<int,int>mymap;
	cin>>n;
	int homo=0,het=0;
	while(n--){
		cin>>s>>temp;
		if(s=="insert"){
			int a=++mymap[temp];
			if(a==2)homo++;
			else if(a==1)het++;
		}
		else {
			int a=--mymap[temp];
			if(a==1)homo--;
			else if(a==0)het--;
		}
		if(homo>0){
			if(het>1)cout<<"both\n";
			else cout<<"homo\n";
		}
		else if(het>1)cout<<"hetero\n";
		else cout<<"neither\n";
	}
	return 0;
}
