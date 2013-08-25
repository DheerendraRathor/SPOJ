#include<cstdio>
#include<iostream>
using namespace std;
int foo(int n, int num){
    int c;
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(num==2) c = foo(n-1,1)+foo(n-1,2);
    if(num==1) c = foo(n-1,1)+2*foo(n-1,2);
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    count += 2*foo(n,2);
    count += foo(n,1);
    printf("%d",count);
return 0;
}
