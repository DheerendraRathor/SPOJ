#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b){
	if(b==0)return a;
	else return gcd (b,a%b);
}
int main(){
	while(1){
		string t;
		cin>>t;
		if(t=="*")break;
		vector<int>num;
		for(int i=0;i<t.size();i++){
			if(t[i]=='Y')num.push_back(1);
			else num.push_back(0);
		}
		
		long long sum=1;
		for(int i=num.size()-1;i>0;i--){
			if(num[i]==1){
				sum=sum*(i+1)/gcd(sum,(i+1));
			}
		}
		
		bool a=true;
		//cout<<"done"<<endl;
		for(int i=0;i<num.size();i++){
			int check=sum%(i+1);
			if(num[i]==1&&check!=0){cout<<-1<<endl;a=false;break;}
			else if(num[i]==0&&check==0){cout<<-1<<endl;a=false;break;}
			
		}
		if(a)cout<<sum<<endl;
		
	}
	return 0;
}
		
		
				
				
