#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    int n,k;
    cin>>n>>k;
    while(n--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        int temp=v[i];
        int ind=lower_bound(v.begin(),v.end(),temp+k)-v.begin();
        if(v[ind]==temp+k)count++;
    }
    cout<<count;
}