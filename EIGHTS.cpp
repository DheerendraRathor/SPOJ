#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(;n>0;n--){
        long long m;
        cin>>m;
        long long a=m/4;
        int  b=m%4;
        if(b==0)a=a-1;
        a=a*1000;
        switch(b){
            case 1:a+=192;break;
            case 2:a+=442;break;
            case 3:a+=692;break;
            case 0:a+=942;break;
        }
        cout<<a<<endl;
    }
    return 0;
}