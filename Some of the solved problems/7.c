#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,h1,e,f;
    int h,u,d,co;
    while(scanf("%d %d %d %f",&h,&u,&d,&f)==4 && h!=0)
    {
        a=(f/100.0);
        h1=(u-d);
        co=1;
        b=u;
        e=(u*a);
        c=0;
        while(h1>=0 && c<h)
        {
            b=b-e;
            if(b>=0)
            {
                c=h1+b;
            }
            else
            {
                c=h1;
            }
            h1=c-d;
            co=co+1;
        }
        if(c>=h && h1>0)
        {
            printf("success on day %d\n",co);
        }
        else
        {
            printf("failure on day %d\n",co);
        }
    }
    return 0;
}
