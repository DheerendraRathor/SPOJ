#include <stdio.h>
#include <stdlib.h>
#include <map>
using namespace std;
 
map<int, unsigned long> dollars;
unsigned long coins (unsigned long);
 
#define MAX(a,b)        (a > b ? a : b)
 
int main()
{
        unsigned long   input[15], max = 0, i;
        char            string[21];
        int             n = 0;
 
        while (-1 != scanf("%ld", &input[n++])) {
                //input[n++] = strtoul (string, NULL, 10);
        }
 
        for (i=0; i<n-1; i++) {
                printf ("%lu\n", coins(input[i]));
        }
        return 0;
}
 
unsigned long coins (unsigned long n)
{
        if (n==0)
                return 0;
 
        unsigned long ans = dollars[n], tmp;
 
        if (ans == 0) {
                tmp = coins(n/2) + coins(n/3) + coins(n/4);
                ans = MAX (n, tmp);
                dollars[n] = ans;
        }
 
        return ans;
}