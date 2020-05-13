#include<stdio.h>
int main()
{
    int k,n,m,x,y,i;
    while(scanf("%d",&k) && k!=0)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<k;i++)
            {
                scanf("%d %d",&x,&y);
                if(x==n || x==m || y==n|| y==m)
                {
                    printf("divisa\n");
                }
                else if((x-n)>0 && (y-m)>0)
                {
                    printf("NE\n");
                }
                else if((x-n)<0 && (y-m)<0)
                {
                    printf("SO\n");
                }
                else if((x-n)>0 && (y-m)<0)
                {
                    printf("SE\n");
                }
                else if((x-n)<0 && (y-m)>0)
                {
                    printf("NO\n");
                }
            }
    }
    return 0;
}
