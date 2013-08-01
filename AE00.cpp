#include<iostream>
using namespace std;

int fac(int x,int y){
    if(x==1)return y;
    for(int i=1;i*i<=x;i++){
        if(x%i==0)y++;
    }
    
    return fac(x-1,y);
}

int main(){
    int t;
    cin>>t;
    cout<<fac(t,1);
    return 0;
}