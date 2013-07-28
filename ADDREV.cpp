#include<iostream>
#include<string>
#include<vector>
using namespace std;


void rev(const string a,vector<int>& ans){
	//int a=a.size();
	bool check=1;
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]!='0'){
			check=false;
			ans.push_back(a[i]);
		}
		else if(a[i]=='0'&&check);
		else ans.push_back(a[i]);
	}
}
			
void summ(vector<int>& a,vector<int>& b,vector<int>& c){
	int carry=0;
	bool check=true;
	int z=b.size()-1;
	int diff=a.size()-b.size();
	for(z;z>=0;z--){
		int dummy=a[z+diff]+b[z]+carry-96;
		carry=dummy/10;
		int q=dummy%10;
		if(q!=0){
			check=0;
			c.push_back(q);
		}
		else if(q==0&&check);
		else c.push_back(q);
	}
	if(diff==0&&carry!=0){
		c.push_back(carry);
		carry=0;
	}
	if(a.size()>b.size()){
		int diff1=diff-1;
		for(diff1;diff1>=0;diff1--){
			int dummy=a[diff1]+carry-48;
			carry=dummy/10;
			int q=dummy%10;
			if(q!=0){
			check=0;
			c.push_back(q);
		}
		else if(q==0&&check);
		else c.push_back(q);
		}
		
	}
	if(carry!=0)c.push_back(carry);
}

int main(){
	string a,b;
	int t;
	cin>>t;
	for(t;t>0;t--){
		cin>>a;
		cin>>b;
		vector<int>a1;vector<int>b1;vector<int>c;
		rev(a,a1);rev(b,b1);
		if(a1.size()>b.size())summ(a1,b1,c);
		else summ(b1,a1,c);
		for(int i=0;i<c.size();i++){
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
}
		
