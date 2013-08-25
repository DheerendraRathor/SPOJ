#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
using namespace std;
 
int main()
{
    int t;
string dummy;
    cin>>t;
getline(cin,dummy);
while(t--){
    list<string>l;
    string s;
   // cin>>s;
    getline(cin,s);
    //cout<<s<<"wer";
    istringstream iss(s);
 
    do
    {
        string sub;
        iss >> sub;
        l.push_back(sub);
        //cout << sub << endl;
    } while (iss);
    l.sort();
    //for (list<string>::iterator i=l.begin();i!=l.end();i++)cout<<*i<<endl;
    for (list<string>::iterator i=l.begin();i!=l.end();i++)
    {
        list<string>::iterator temp=i;
        i++;
        //cout<<*temp<<"1"<<endl;
        //cout<<*i<<"2"<<endl;
        while(*temp==*i&&i!=l.end())
        {
          // cout<<"kuch ";
           i= l.erase(i);
            //cout<<l.size()<<endl;
        }
       // cout<<*temp<<"temp"<<endl;
        i=temp;
    }
    cout<<l.size()-1<<endl;
       // for (list<string>::iterator i=l.begin();i!=l.end();i++)cout<<*i<<endl;
}
}