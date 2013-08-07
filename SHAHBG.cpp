#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
	cin>>n;
	vector<bool>v(20000,false);
	int groups=0;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		t--;
		if(t==0){
			if(v[1])v[0]=true;
			else {
				v[0]=true;
				groups++;
			}
		}
		else if(t==19999){
			if(v[t-1])v[t]=true;
			else {
				v[t]=true;
				groups++;
			}
		}
		else {
			if(v[t-1]&&v[t+1]){
				v[t]=true;
				groups--;
			}
			else if(v[t-1]||v[t+1])v[t]=true;
			else {
				v[t]=true;
				groups++;
			}
		}
		cout<<groups<<endl;
	}
	cout<<"Justice\n";
	return 0;
}
