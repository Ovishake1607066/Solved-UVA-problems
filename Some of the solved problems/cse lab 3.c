#include<stdio.h>

int main()
{
    long long int a,l, c,i,n;
    i=0;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        if(a<0 && l<0)
            break;
        n=a;
        i++;
        c=0;
        while(a!= 1)
        {
            if(a>l)
                break;
            else if(a%2==0)
                a=a/2;
            else
                a=(3*a)+1;
            c++;
        }
        if(a==1)
            c++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,n,l,c);
    }
    return 0;

}
