#include<iostream>
#include<cstdio>
using namespace std;

long long  power[]={1,20,360,7200,144000,2880000,57600000};

long long num(char* const c,int pos){
    int dots=0,dash=0;
	for(int i=0;i<50;i++){
		if(c[i]!=' '&&c[i]!='.'&&c[i]!='-')break;
		if(c[i]=='.')dots++;
		else if(c[i]=='-')dash++;
	}

	return power[pos]*(dash*5+dots);
}

int main(){
	while(1){
		int a;
		cin>>a;
		char b[1];
		cin.getline(b,10);
		if(a==0)break;
		long long ans=0;
		for(int i=a-1;i>=0;i--){
			char c[50];
			//scanf ("%[^\n]%*c", c);
			cin.getline(c,50);
			//cin.getline(b,10);
			if(c[0]!='S'){
				ans+=num(c,i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}	
			
		
