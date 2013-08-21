#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long r;
        scanf("%lld",&r);
        long long dat=4*r*r;
        printf("Case %d: %lld.25\n",i,dat);
    }
    return 0;
    
}