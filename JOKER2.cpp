#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
	int count =0;
	bool check=true;
    char c;
	while(n--){
		cin>>c;
       // cout<<c<<endl;
		if(c=='N')count=0;
		else count++;
		if(count==k){
			check=false;
			cout<<"DIED\n";
			break;
		}
	}
	if(check)cout<<"SELECTED\n";
	cout<<"KILL BATMAN\n";
	return 0;
}
