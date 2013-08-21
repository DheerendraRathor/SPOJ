#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,d;
        scanf("%d%d%d",&n,&m,&d);
        while(n--)
        {
            int temp;
            scanf("%d",&temp);
            m-=temp/d;
            if(temp%d==0)m++;
        }
        if(m<=0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}