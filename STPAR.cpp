#include<iostream>
#include<stack>
using namespace std;

int main(){
    while(1){
    	int n;
		cin>>n;
		if(n==0)break;
		int ans=0;
		stack<int>stk;
		bool check =true;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
           // cout<<ans<<" ";
			if(a!=ans+1){
				if(!stk.empty()){
                   // cout<<"done ";
					while(!stk.empty()&&stk.top()==ans+1){
						stk.pop();
						ans++;
					}
					if(a!=ans+1)stk.push(a);
					else ans++;
				}
				else stk.push(a);
			}
			else ans++;
		}
		while(!stk.empty()){
			if(stk.top()==ans+1){
				stk.pop();
                ans++;
			}
			else {
				cout<<"no"<<endl;check=false;break;
			}
		}
		if(check)cout<<"yes"<<endl;
	}
	return 0;
}
		
					
