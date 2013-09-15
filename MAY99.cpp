#include <cstdio>
#include <cmath> 
#include <string>
#include <iostream>
using namespace std;
 
int nchar( long long int a)
{
	int ctr = 0;
  	long long int n = 0;
    	while( n < a)
     	{
      		n += pow(5,++ctr);
 	}
        return ctr; 
}
 
int main()
{
	int t;
   	scanf("%d",&t);
    	string m ="manku";
     	long long int n;
      	while(t--)
       	{
        	string s = "";
         	scanf("%lld",&n);
          	int g = nchar(n);
           	for( int i = 0; i < g ;i++)
            	{
             		int j = n % 5;
              		if( j == 0)
               		j=5;
                	s = m.substr(j-1,1) + s ;
                 	if(n%5 ==0) 
                 	n = n/5 -1;
                  	else
                   	n = n / 5;
              	} 
                cout <<s<< endl;
	}
        return 0;
}