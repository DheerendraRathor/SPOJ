#include<iostream>
#include<vector>
using namespace std;

typedef int data;

void mult(data n,vector<data>& V){
	data carry=0;
	data len= V.size();
	for(data i=0;i<len;i++){
		data pro=V[i]*n+carry;
		V[i]=pro%10;
		carry=pro/10;
	}
	if(carry!=0)V.push_back(carry%10);
	if((carry/10)!=0)V.push_back(carry/10);
}

void fact(data n,vector<data>& V){
		V.push_back(1);
		for(data i=2;i<=n;i++){
			mult(i,V);
		}
}

void vec_print(vector<data>& ans){
	data siz=ans.size()-1;
	for(siz;siz>=0;siz--){
		cout<<ans[siz];
	}
	cout<<endl;
}
int main(){
	data t;
	cin>>t;
	for(t;t>0;t--){
		data num;
		cin>>num;
		vector<data>ans;
		fact(num,ans);
		vec_print(ans);
	}
return 0;
}
