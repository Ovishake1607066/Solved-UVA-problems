#include<stdio.h>
int main()
{
    long int i,n,b,h,w,p,a,d,c,t;
    while(scanf("%ld %ld %ld %ld",&n,&b,&h,&w)==4)
    {
        c=b+1;
        for(i=0;i<h;i++)
        {
            scanf("%ld",&p);
            for(i=0;i<w;i++)
            {
                t=0;
                scanf("%ld",&a);
                if(a>=n)
                {
                    t=p*n;
                    if(c>t)
                    {
                        c=t;
                    }
                }
            }
        }
        if(b>=c)
        {
            printf("%ld\n",c);
        }
        else
        {
            printf("stay home\n");
        }
    }
    return 0;
}
