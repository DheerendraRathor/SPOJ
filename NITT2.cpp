#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum=0;
        long long seven=0;
        for(int i=s.length()-1,j=1;i>=0;i--,j++)
        {
            sum=sum+s[i]-'0';
            int w=j%6;
            switch(w)
            {
                case 1:seven+=s[i]-48;break;
                case 2:seven+=3*(s[i]-48);break;
                case 3:seven+=2*(s[i]-48);break;
                case 4:seven-=(s[i]-48);break;
                case 5:seven-=3*(s[i]-48);break;
                case 0:seven-=2*(s[i]-48);break;
            }
        }
        int last=s[s.length()-1]-48+10*(s[s.length()-2]-48);
        if(last%4==0&&sum%9==0&&seven%7==0)cout<<"Yes ";
        else cout<<"No ";
        if(last%25==0&&sum%3==0&&seven%7==0)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
