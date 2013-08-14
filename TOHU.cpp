#include<cstdio>
double sum(int n)
{   if(n==1)return 2.0/3;
    return 2.0/3+0.5*(1.0/6-1.0/(n+1)+1.0/(n+2));
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%.11lf\n",sum(n));
    }
    return 0;
}