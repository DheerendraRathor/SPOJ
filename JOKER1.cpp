#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;
#define s(a) scanf("%d",&a)
#define pb(a) push_back(a)
int main()
{
    int t;
	s(t);
	while(t--)
	{
		int n;
		s(n);
		vector<int>v;
		while(n--)
		{
			int a;
			s(a);
			v.pb(a);
		}
		sort(v.begin(),v.end());
		long long ways=v[0];
		for(int i=1;i<v.size();i++)
		{
			if(v[i]-i>0)
			{
				ways=(ways*(v[i]-i))%1000000007;
			}
			else ways=0;
		}
		printf("%lld\n",ways);
	}
	printf("KILL BATMAN\n");
	return 0;
}
				
