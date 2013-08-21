#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,c,d,a1,b1,c1,d1;
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
        if(a==-1)break;
        if(a==0&&b==0&&c==0&&d==0)cout<<"0 0 0 0\n";
        else 
        {
            int count[4];
            count[0]=a/a1;count[1]=b/b1;count[2]=c/c1;count[3]=d/d1;
            int aw=max(count[3],max(count[2],max(count[0],count[1])));
            //cout<<aw<<endl;
            int answer[4];
            answer[0]=answer[1]=answer[2]=answer[3]=0;
            if(a1*aw>=a)answer[0]=a1*aw-a,a=0;
            else a-=a1*aw;
             if(b1*aw>=b)answer[1]=b1*aw-b,b=0;
            else b-=b1*aw;
             if(c1*aw>=c)answer[2]=c1*aw-c,c=0;
            else c-=c1*aw;
             if(d1*aw>=d)answer[3]=d1*aw-d,d=0;
            else d-=d1*aw;
            if(a!=0||b!=0||c!=0||d!=0)
            {
                answer[0]+=a1-a;
                answer[1]+=b1-b;
                answer[2]+=c1-c;
                answer[3]+=d1-d;
            }
            printf("%d %d %d %d\n",answer[0],answer[1],answer[2],answer[3]);
        }
    }
    return 0;
}