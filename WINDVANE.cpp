#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;
typedef long long ll;
#define FOR(n) for (int i=0;i<n;i++)
#define pb(n) push_back(n);



struct my{
	int x1,y1,x2,y2;
	bool dir;
};

void find(int a,int b,vector<my>& v,char mat[][1001])
{
	int rotate=0;
	for(int i=0;i<v.size();i++)
	{
		my temp=v[i];
		if(a>=temp.x1&&a<=temp.x2&&b>=temp.y1&&b<=temp.y2)
		{
			if(temp.dir)rotate-=1;
			else rotate+=1;
		}
	}
	rotate=rotate-(rotate/4)*4;
	if(rotate<0)rotate+=4;
	char init=mat[a][b];
	if(init=='N'){
		switch(rotate){
			case 0:cout<<"N\n";return;
			case 1:cout<<"E\n";return;
			case 2:cout<<"S\n";return;
			case 3:cout<<"W\n";return;
		}
	}
	if(init=='E'){
		switch(rotate){
			case 0:cout<<"E\n";return;
			case 1:cout<<"S\n";return;
			case 2:cout<<"W\n";return;
			case 3:cout<<"N\n";return;
		}
	}
	if(init=='S'){
		switch(rotate){
			case 0:cout<<"S\n";return;
			case 1:cout<<"W\n";return;
			case 2:cout<<"N\n";return;
			case 3:cout<<"E\n";return;
		}
	}
	if(init=='W'){
		switch(rotate){
			case 0:cout<<"W\n";return;
			case 1:cout<<"N\n";return;
			case 2:cout<<"E\n";return;
			case 3:cout<<"S\n";return;
		}
	}
}

int main(){
	char mat[1001][1001];
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		string c;
		cin>>c;
		for(int j=0;j<n;j++)
		{
			mat[i][j+1]=c[j];
			
		}
	}
	char dummy;
	//for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cout<<mat[i][j];
	int comm;
	scanf("%d",&comm);
	vector<my>v;
	while(comm--)
	{
		char c;
		cin>>c;
		if(c=='D'){
			int a,b;
			cin>>a>>b;
			find(a,b,v,mat);
		}
		else {
			my temp;
			cin>>temp.x1>>temp.y1>>temp.x2>>temp.y2>>temp.dir;
			v.pb(temp);
		}
	}
	return 0;
}
