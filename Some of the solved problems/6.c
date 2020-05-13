#include<stdio.h>
int main()
{
    double h,u,d,f,i,j,co,a,b,c,h1,e;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4 && h!=0)
    {
        a=(f/100);
        h1=u-d;
        co=1;
        e=b*a;
        while(h1>=0 && c<=h)
        {
            u=u-e;
            c=h1+u;
            h1=c-d;
            co=co+1;
        }
        printf("%lf %.01lf\n",co,c);
    }
}
