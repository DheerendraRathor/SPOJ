#include<iostream>
#include<string>
using namespace std;


void goo(string& a,int z,int n)
{
	bool check=false;
	for(int i=z;i>=0;i--){
		if(a[i]!='9'){
			a[i]++;
			a[n-i-1]++;
			check=true;
			break;
			
		}
		else {
			a[i]='0';
			a[n-i-1]='0';
			
		}
	}
	if(!check){
		
		a="1"+a;
		a[a.length()-1]++;
		
	}
}
	
		
	
void foo(string a,string b){
	int n=a.length();
	int z;
	if(n%2==0)z=n/2-1;
	else z=n/2;
	bool check=true,stat=false;
	for(int i=0;i<z;i++){
		if(a[n-i-1]!=a[i]){
			stat=true;
			check=check&&(a[i]>=a[n-i-1]);
			//cout<<"pt1 "<<check<<endl;
			a[n-i-1]=a[i];	
		}
	}
		if(n%2==0){
			if(a[z]>a[z+1])a[z+1]=a[z];
			else if(a[z]<a[z+1]){
				a[z]++;
				a[z+1]=a[z];
			}
			else if(!check||!stat||(b[z+2]>a[z+2])){
				if(a[z]!='9'){
					a[z]++;
					a[z+1]=a[z];
				}
				
				else goo(a,z,n);
				//cout<<"pt 2"<<endl;
				//cout<<"yes"<<endl;
			}
		}
		else if(!check||!stat||(b[z+1]>a[z+1]))
		{	
			if(a[z]!='9')a[z]++;
			
			else goo(a,z,n);
			//cout<<"yes1"<<endl;
		}
	
	for(int i=0;i<a.length();i++){
		cout<<a[i]-48;
	}
	cout<<endl;
}


int main(){
	int t;
	cin>>t;
	for(;t>0;t--){
		string a,b;
		cin>>a;
		b.assign(a);
		foo(a,b);
	}
	return 0;
}
		
