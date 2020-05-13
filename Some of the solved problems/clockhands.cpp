#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    while(scanf("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        float a,b,c,d,e,ans,s;
        a=m/5;
        b=m%5;
        c=h-a;
        ans=c*30;
        d=.5*m;
        e=6*b;
        ans=ans+d-e;
        if(ans<0)
            ans=ans+360;
        if(ans>180)
            ans=360-ans;
        printf("%.3f\n",ans);
    }
}
