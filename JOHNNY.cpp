#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long sum=0;
	vector<long long>V;
	for(int i=0;i<n;i++){
		long long c;
		cin>>c;
		sum+=c;
		V.push_back(c);
	}
	long long avg=sum/n;
	for(int i=0;i<n;i++){
		if(V[i]>avg)cout<<i+1<<endl;
	}
	return 0;
}

