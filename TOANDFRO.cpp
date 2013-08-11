#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    while(1){
	    int n;
	    scanf("%d",&n);
	    if(n==0)break;
		vector< vector<char> > v;
		string s;
		cin>>s;
		int rows= s.size()/n;
		bool direction = true;
		for(int i=0,k=0;i<rows;i++,direction=!direction)
		{
			vector<char> r;
			for (int j = 0; j < n;j++)
			{
				r.push_back(s[k]);
				k++;
			}
			if(direction)reverse(r.begin(),r.end());
			v.push_back(r);
		}
		for (int i=n-1;i>=0;i--)
		{
			for (int j=0;j<rows;j++)
			{
				printf("%c",v[j][i]);
			}
		}
		printf("\n");
	}	
    return 0;
}



