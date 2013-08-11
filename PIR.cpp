#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
	scanf("%d", &t);
	while(t--)
	{
        double u,v,w,U,V,W;
		scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&W,&V,&U);
		double g=v*v+w*w-U*U;
		double h=w*w+u*u-V*V;
		double i=u*u+v*v-W*W;
		double volsquare=4.0*u*u*v*v*w*w-u*u*g*g-v*v*h*h-w*w*i*i+g*h*i;
		double volume=sqrt(volsquare)/12.0;
		printf("%.4lf\n",volume);
	}
	return 0;
}