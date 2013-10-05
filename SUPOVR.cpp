#include<iostream>
using namespace std;

int main(){
	int t=6;
	int check=0;
	int b1; int b2;
	int b3;
	int temp1=0;
	int temp2=0;
	bool strike=true;
	int out=0;
	while(t--)
	{
		char c;
		cin>>c;
		if(c=='W'||c=='N'){t++; continue;}
		if(c=='O'){
			check++;
			if(check==2)break;
			if(strike){
				b1=temp1;
				temp1=0;
				out=1;
				continue;
			}
			else {
				b2=temp2;
				temp2=0;
				out=2;
				continue;
			}
		}
		int temp=c-48;
		if(strike){
			if(temp==1||temp==3){
				strike^=1;
				temp1+=temp;
			}
			else temp1+=temp;
		}
		else {
			if(temp==1||temp==3){
				strike^=1;
				temp2+=temp;
			}
			else temp2+=temp;
		}
	}
	if(out==0){
		cout<<temp1<<endl<<temp2<<endl<<0<<endl;
	}
	if(out==1){
		cout<<b1<<endl<<temp2<<endl<<temp1<<endl;
	}
	if(out==2){
		cout<<temp1<<endl<<b2<<endl<<temp2<<endl;
	}
	return 0;
}
		
			
		
