#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m,a;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        ll c=0;
        printf("%lld %lld ",n,m);
        if(m<n)
        {
            ll v=n;
            n=m;
            m=v;
        }
        for(ll i=n; i<=m; i++)
        {
            ll x=i;
            for(ll j=1; ; j++)
            {
                //cout<<x<<endl;
                    if(x<=1)
                    {
                        c=max(j,c);
                        mark[i]=j;
                        break;
                    }
                    if(x%2==0)
                        x/=2;
                    else
                    {
                        x=(3*x)+1;
                    }
                //cout<<i<<"    "<<j<<endl;
            }
        }
        printf("%lld\n",c);
    }
}

