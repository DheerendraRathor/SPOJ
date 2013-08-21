#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int half=0,four=0,tf=0;
    while(n--)
    {
        int a,b;
        char c;
        cin>>a>>c>>b;
        if(a==3)tf++;
        else if(b==2)half++;
        else four++;
    }
    int answer=0;
    if(tf<=four)
    {
        answer+=tf;
        four-=tf;
    }
    else 
    {
        answer+=tf;
        four=0;
    }
    answer+=half/2;
    if(half%2==1)
    {
        if(four<=2)
        {
            answer++;
        }
        else 
        {
            answer++;
            four-=2;
            answer+=four/4;
            if(four%4!=0)answer++;
        }
    }
    else
    {
        answer+=four/4;
        if(four%4!=0)answer++;
    }
    answer++;
    cout<<answer;
    return 0;
}