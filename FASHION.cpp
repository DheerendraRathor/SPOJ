#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int summ(vector<int>&a,vector<int>&b){
	int sum=0;
	int s=a.size();
	for(int i=0;i<s;i++){
		sum=sum+a[i]*b[i];
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		int n;
		cin>>n;
		vector<int>a;
		vector<int>b;
		
		for(int i=0;i<n;i++){
			int d;
			cin>>d;
			a.push_back(d);
		}
		for(n;n>0;n--){
			int e;
			cin>>e;
			b.push_back(e);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		cout<<summ(a,b)<<endl;
	}
	return 0;
}
		
