#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s;
    while(1)
    {
        cin>>s;
        //cout<<s<<endl;
        vector<char>ans;
        
        char tag='n';
         bool pri=true,fori=true;
        if(s[0]<97){printf("Error!\n");pri=false;fori=false;}
        else ans.push_back(s[0]);
        if(fori)
        {
            for(int i=1;i<s.length();i++)
            {
                if(s[i]<95&&(tag=='n'||tag=='j'))
                {
                    tag='j';
                    ans.push_back('_');ans.push_back(s[i]+32);
                }
                else if(s[i]<95&&tag=='c')
                {
                    printf("Error!\n");
                    pri=0;
                    break;
                }
                else if(s[i]==95&&(tag=='n'||tag=='c'))
                {
                    tag='c';
                    if(s[i+1]<97){printf("Error!\n");pri=0;break;}
                    else 
                    {
                        ans.push_back(s[i+1]-32);
                        i++;
                    }
                }
                else if(s[i]==95&&tag=='j'){printf("Error!\n");pri=0;break;}
                else if(s[i]>=97)ans.push_back(s[i]);
            }
        }
        if(pri)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i];
            }
            printf("\n");
        }
        if(cin.eof()){cin>>s;break;}
    }
    return 0;
}