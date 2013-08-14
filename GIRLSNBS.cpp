#include<cstdio>
using namespace std;

int foo(int a,int b)
{
    int z;
    if(b%(a+1)==0)z=0;
    else z=1;
    return b/(a+1)+z;
}
int main()
{   
    while(1)
    {
        int g,b;
        scanf("%d%d",&g,&b);
        if(g==-1)break;
        if(g==b){
            if(g!=0)printf("1\n");
            else printf("0\n");
        }
        else if(g<b)printf("%d\n",foo(g,b));
        else printf("%d\n",foo(b,g));
    }
    return 0;
}
