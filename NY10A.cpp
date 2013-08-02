#include<iostream>
#include<string>
using namespace std;

void foo(string a, int* b){
	for(int i=0;i<38;i++){
		if(a[i]=='T'){
			if(a[i+1]=='T'){
				if(a[i+2]=='T')b[0]++;
				else b[1]++;
			}
			else {
				if(a[i+2]=='T')b[2]++;
				else b[3]++;
			}
		}
		else {
			if(a[i+1]=='T'){
				if(a[i+2]=='T')b[4]++;
				else b[5]++;
			}
			else {
				if(a[i+2]=='T')b[6]++;
				else b[7]++;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		int b[]={0,0,0,0,0,0,0,0};
		int n;
		cin>>n;
		string a;
		cin>>a;
		//cout<<a<<" "<<n<<" "<<t;
		cout<<n<<" ";
		foo(a,b);
		for(int i=0;i<8;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
