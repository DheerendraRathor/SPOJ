#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    int i=1;
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==-1)break;
        vector<int>coeff;
        for(int i=0;i<n+1;i++)
        {
            int temp;
            scanf("%d",&temp);
            coeff.push_back(temp);
        }
        int k;
        scanf("%d",&k);
        printf("Case %d:\n",i);
        while(k--)
        {
            int x;
            scanf("%d",&x);
            long long power=1;
            long long answer=0;
            for(int i=coeff.size()-1;i>=0;i--,power*=x)
            {
                answer+=coeff[i]*power;
            }
            
            printf("%lld\n",answer);
        }
        i++;
    }
    return 0;
}
