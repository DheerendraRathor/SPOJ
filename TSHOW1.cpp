#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long x,y,sum;
    int n ,k , t, a[51],i=0,j;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%lld",&x);
    	i=0;
    	n = ceil(log2((x+3)/2));
    	sum = 2*(pow(2,n-1)-1);
    	y = x -sum-1;
    	while(1)
    	{
        	a[i++]=y%2;        
        	y=y/2;                
        	if(y==0)
        	{
            		k= n-i;
            		if(i!=n){
            			while(k--){
                			a[i]=0;
                			i++;
                		}
                	}           
           		break;
            
        	}
    	}
    	for(j=i-1;j>=0;j--)
    	{
        	if(a[j]==0)printf("5");    
        	else if(a[j]==1)printf("6");
        }
    	cout<<endl;
    }    
    return 0;
}



