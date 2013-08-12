#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(1000001,0);
	v[0]=0;
	v[1]=2;
	for(int i=2;i<1000001;i++){
		v[i]=(v[i-1]+3*i-1)%1000007;
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		printf("%d\n",v[a]);
	}
	return 0;
}
