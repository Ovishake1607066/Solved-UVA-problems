#include<stdio.h>
int main()
{
    int t,i;
    long int a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a>b)
        {
            printf(">");
        }
        else if(a<b)
        {
            printf("<");
        }
        else
        {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}


