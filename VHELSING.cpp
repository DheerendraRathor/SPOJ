#include<cstdio>
#include<cmath>
using namespace std;

double volume(int r)
{
    double some=8*(2-sqrt(2))*r*r*r;
	return some;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r;
		scanf("%d",&r);
		printf("%.4lf\n",volume(r));
	}
	return 0;
}