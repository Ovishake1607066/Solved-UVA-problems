#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,w,i,j,k,a,d,c;
    long long int b,p,t;
    while(scanf("%d%lld%d%d",&n,&b,&h,&w)==4)
    {
        t=0;
        c=0;
        for(i=0;i<h;i++)
        {
            d=0;
            scanf("%lld",&p);
            for(j=0;j<w;j++)
            {
                scanf("%d",&a);
                if(a<n)
                {
                    d=1;
                }
            }
            if(d==0)
            {
                t=p*n;
                if(t<=b)
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
        printf("%lld\n",t);
        else
        printf("stay home\n");
    }
    return 0;
}
