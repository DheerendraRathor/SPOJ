#include<iostream>
#include<string>
using namespace std;

int check(string n){
	int nn=n.length();
	int count=0;
	for(int i=1;i<nn-1;i++){
		if(n[i]=='0'){
			if(n[i-1]=='|'&&n[i+1]=='|')
			{count++; i+=2;}
			if(n[i-1]=='/'&&n[i+1]=='/')
			{count++; i+=2;}
			if(n[i-1]=='\\'&&n[i+1]=='/')
			{count++; i+=2;}
			if(n[i-1]=='\\'&&n[i+1]=='\\')
			{count++; i+=2;}
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	for(n;n>0;n--){
		string a;
		cin>>a;
		int ans=check(a);
		if(ans!=0)cout<<ans<<endl;
		else cout<<"That Bad Party xD"<<endl;
	}
	return 0;
}
	

