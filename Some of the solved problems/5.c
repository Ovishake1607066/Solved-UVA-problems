#include<stdio.h>
int main()
{
    int t,n,i,j,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        b=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(a>b)
            {
                b=a;
            }
        }
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}

