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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll a,b,c=0;
        cin>>a>>b;
        /*for(ll j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                c+=j;
                j++;
            }
        }                Another answer*/
        //cout<<ceil(b/2.0)<<endl;
        c=(ll)ceil(b/2.0)*(ll)ceil(b/2.0);
        //cout<<c<<endl;
        c-=(ll)ceil((a-1)/2.0)*(ll)ceil((a-1)/2.0);
        cout<<"Case "<<i<<": "<<c<<endl;
    }
}

