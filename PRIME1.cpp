/*
 * prime.cpp
 * 
 * Copyright  ©2013 Dheerendra Singh Rathor <dheeru.rathor14@gmail.com>
 * 
 */
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

typedef unsigned long long mydata;
mydata n=31623;



bool check(mydata a,const vector<mydata>& answer){
	int l=answer.size();
    for (int i=0;i<l&&i*i<=a;i++){
		if (a%answer[i]==0) return false;
	}
	return true;
}

void foo(vector<bool>& V, mydata num){
	for(mydata i=num;i<=n;i=i+num){
		V[i]=false;
	}
	V[num]=true;
}

void make(vector<bool>& V){
	mydata siz=V.size();
	for	(mydata i=0;i<=n+1;i++){
		if(V[i])foo(V,i);
	}
}
	
int count(mydata a, mydata b,vector<bool>& prime,vector<mydata>& answer,vector<mydata>& number){
	mydata limit=answer[answer.size()-1];
	if(b<=n){
		
		for (a;a<=b;a++){
			if(prime[a])number.push_back(a);
		}
	}
	else if(a>limit){
		
		for(a;a<=b;a++){
			if(check(a,answer))number.push_back(a);
		}
		
	}
	else {
		
		for(a;a<=n;a++){
			if(prime[a])number.push_back(a);
		}
		for(a;a<=b;a++){
			if(check(a,answer))number.push_back(a);
		}

	}
}
			
	
void result(mydata a,mydata b,vector<mydata> & ans,vector<bool> & num){
	int siz=num.size();
	if(a==1)num[0]=0;
	for(int i=0;ans[i]*ans[i]<=b&&i<ans.size();i++){
		mydata re=a%ans[i];
		mydata ad=ans[i];
		if(re==0&&a!=ans[i])num[0]=0;
		for(mydata j=ans[i]-re;j<num.size();j=j+ad){
			if((j+a)!=ans[i])num[j]=0;
		}
	}
}
		
			
	
/* void foo(mydata m, mydata n){
	for (m;m<=n;m++){
		if (check(m)) cout<<m  */
		
 int main(){
	vector<bool>prime(n+1,true);
	vector<mydata>answer;
	prime[0]=0;
	prime[1]=0;
	make(prime);
	for(mydata i=0;i<n;i++){
		if(prime[i])answer.push_back(i);
	}
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		mydata a,b;
		cin>>a>>b;
		vector<bool>number(b-a+1,true);
		result(a,b,answer,number);
		int siz=number.size();
		for(int j=0;j<siz;j++){
			if(number[j]){
				cout<<j+a<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}



