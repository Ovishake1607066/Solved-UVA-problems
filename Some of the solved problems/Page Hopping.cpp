#include<bits/stdc++.h>
#define ll long long
#define inf 100000000
using namespace std;
ll adj[105][105];
ll tn,te,n1,n2,w;
int main()
{
    ll x=1;
    while(1)
    {
        tn=100;
        for(ll i=1; i<=tn; i++)
        {
            for(ll j=1; j<=tn; j++)
            {
                if(i==j)
                    adj[i][j]=0;
                else
                    adj[i][j]=inf;
            }
        }
        ll br=0,m=0;
        for(ll i=1; ; i++)
        {
            cin>>n1>>n2;
            if( n2==0)
            {
                if(i==1)
                    br=1;
                break;
            }
            if(max(n1,n2)>m)
                m=max(n1,n2);
            adj[n1][n2]=1;
        }
        if(br)
            break;
        for(ll k=1; k<=m; k++)
        {
            for(ll i=1; i<=m; i++)
            {
                for(ll j=1; j<=m; j++)
                {
                    if(adj[i][k]+adj[k][j]<adj[i][j])
                    {
                        adj[i][j]=adj[i][k]+adj[k][j];

                    }
                }
            }
        }
        double s=0,d=0;
        for(ll i=1; i<=m; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                if(adj[i][j]==inf)
                {
                    continue;
                }
                s=s+adj[i][j];
                if(adj[i][j])
                d++;
            }
        }
        cout<<"Case "<<x<<": average length between pages = ";
        printf("%.3f",s/d);
        cout<<" clicks"<<endl;
        x++;
    }
}
















































