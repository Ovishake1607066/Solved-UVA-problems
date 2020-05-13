#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll d,m,y,mq,a,b,c,t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>d>>m>>y>>mq;
        c=0;
        if(d==29 && m==2)
        {
            for(ll j=y+4;j<=mq;j+=4)
            {
                if(j%400!=0 && j%100==0)
                    continue;
                c++;
            }
        }
        else
            c=mq-y;
        cout<<"Case "<<i<<": "<<c<<endl;
    }

}
