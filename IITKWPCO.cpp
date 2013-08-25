#include<iostream>
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
		while(n--){
			int temp;
			s(temp);
			v.pb(temp);
		}
		int count=0;
        sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			if(v[i])
			{   
                //cout<<"k";
				int temp=v[i];
				int ind=lower_bound(v.begin(),v.end(),temp*2)-v.begin();
                //cout<<i<<" "<<ind<<endl;
				if(v[ind]==temp*2)count++,v[ind]=0;
				v[i]=0;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
