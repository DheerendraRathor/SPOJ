#include<cstdio>
#include<iostream>
using namespace std;
int phi(int n)
{
     int result = n;
     int i;
       for(i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) 
         result -= result / i; 
         while (n % i == 0) 
         n /= i; 
       } 
       if (n > 1)
       result -= result / n; 
       return result; 
}
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        printf("%d\n",phi(num));
    }
    return 0;
}