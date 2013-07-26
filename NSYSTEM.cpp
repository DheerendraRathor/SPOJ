#include<iostream>
#include<string>
using namespace std;


void change(string in, int* a){
	int siz=in.length();
	for(int i=0;i<siz;i++){
		if(in[i]>49&&in[i]<58){
			switch(in[i+1]){
				case 'm':a[0]=in[i]-48;
				break;
				case 'c':a[1]=in[i]-48;
				break;
				case 'x':a[2]=in[i]-48;
				break;
				case 'i': a[3]= in[i]-48;
				break;
			}
			i++;
		}
		else {
			switch(in[i]){
				case 'm':a[0]=1;
				break;
				case 'c':a[1]=1;
				break;
				case 'x':a[2]=1;
				break;
				case 'i': a[3]= 1;
				break;
			}
		}
	}
}

void summ(int* a, int* b,int* c){
	int carry=0;
	for(int i=3;i>=0;i--){
		c[i]=(a[i]+b[i]+carry)%10;
		carry=(a[i]+b[i]+carry)/10;
	}
}
void print_(int i){
	switch (i){
		case 0: cout<<"m";break;
		case 1: cout<<"c";break;
		case 2: cout<<"x";break;
		case 3: cout<<"i";break;
	}
}

void print(int* a){
	for(int i=0;i<4;i++){
		if(a[i]==0);
		else if(a[i]==1)print_(i);
		else {cout<<a[i];print_(i);}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	for(t;t>0;t--){
		string m,n;
		cin>>m>>n;
		int a[]={0,0,0,0};
		int b[]={0,0,0,0};
		int c[]={0,0,0,0};
		change(m,a);change(n,b);summ(a,b,c);
		print(c);
	}
	return 0;
}
		
