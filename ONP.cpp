#include<iostream>
#include<string>
#include<vector>
using namespace std;


void answer(const vector<char>& input){
    int len=input.size();
	//cout<<len<<endl;
	//vector<char>sub;
	if(len==5) {
		//cout<<endl;
		cout<<input[1]<<input[3]<<input[2];
		//for(int i=0;i<3;i++){
			//cout<<s[i]<<endl;
		//} cout<<endl;
		//string a(s);
		//cout<<"sldf"<<endl;
		//cout<<a<<endl;
		
	}
	else if(input[1]!='(') {
		vector<char>sub(&input[3],&input[len-1]);
		cout<<input[1];answer(sub);
		cout<<input[2];
	}
	else if(input[len-2]!=')'){
		vector<char>sub(&input[1],&input[len-3]);
		answer(sub);
		cout<<input[len-2]<<input[len-3];
	}
	else{
		int bracket_count = 0;
		int breaker;
		for(int i=1;i<len;i++){
			if(input[i]=='(')bracket_count++;
			else if(input[i]==')')bracket_count--;
			if(bracket_count==0){
				breaker=i+1;
				break;
			}
		}
		vector<char>sub(&input[1],&input[breaker]);
		vector<char>sub1(&input[breaker+1],&input[len-1]);
		answer(sub);
		answer(sub1);cout<<input[breaker];
	}	
}

int main(){
	int t;
	cin>>t;
	char a[1];
	cin.getline(a,1);
	//cout<<t;
	for (int i=0;i<t;i++){
		//cout<<"sdfdg ";
		vector<char>str;
		char ent[500];
		//cout<<"eoodf";
		
		cin.getline(ent,400);
		//cout<<"hfskfj";
		
		for(int i=0;i<400;i++){
			
			if(ent[i]==0)break;
			str.push_back(ent[i]);
		}
		//cout<<str<<endl;
        
		answer(str);cout<<endl;
	}
	return 0;
}
		
