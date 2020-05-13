#include<stdio.h>
int main()
{
    int t,i,a,b,c,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && c>a || a>c && b>a)
        {
            n=a;
        }
        else if(b>a && c>b || b>c && a>b)
        {
            n=b;
        }
        else if(c>a && b>c || c>b && a>c)
        {
            n=c;
        }
        printf("Case %d: %d\n",i,n);

    }
    return 0;
}
