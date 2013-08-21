#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int temp;
            scanf("%d",&temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j=lower_bound(v.begin(),v.end(),m-v[i])-v.begin();
            if(j!=i&&j!=n&&v[j]==m-v[i])ans++;
        }
        printf("%d\n",ans/2);
    }
    return 0;
}