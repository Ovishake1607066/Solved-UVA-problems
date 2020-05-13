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
    ll n,m;
    while(cin>>n>>m && (n || m))
    {
        ll c=0,a,b,x=0;
        while(1)
        {
            //cout<<a<<"    "<<b<<endl;
            a=n%10;
            b=m%10;
            n/=10;
            m/=10;
            if(a+b+x>9)
                {
                    c++;
                    x=1;
                }
            else
                x=0;
            if(n==0 && m==0)
                break;

        }
        if(!c)
            cout<<"No carry operation."<<endl;
        else if(c==1)
        {
            cout<<c<<" carry operation."<<endl;
        }
        else
        cout<<c<<" carry operations."<<endl;

    }
}

