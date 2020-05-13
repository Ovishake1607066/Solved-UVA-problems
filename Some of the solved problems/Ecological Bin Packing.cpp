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
    ll a1,a2,a3,a4,a5,a6,a7,a8,a9,s1,s2,s3;
    string s[6]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9)
    {
        ll c=0,ss=0;
        s1=a2+a3+a4+a5+a7+a9;
        ss=s1;
        s2=a2+a3+a4+a6+a7+a8;
        if(s2<ss)
        {
            ss=s2;
            c=1;
        }
        s2=a2+a1+a5+a6+a7+a9;
        if(s2<ss)
        {
            ss=s2;
            c=2;
        }
        s2=a2+a1+a4+a6+a8+a9;
        if(s2<ss)
        {
            ss=s2;
            c=3;
        }
        s2=a3+a1+a5+a6+a8+a7;
        if(s2<ss)
        {
            ss=s2;
            c=4;
        }
        s2=a3+a1+a5+a4+a8+a9;
        if(s2<ss)
        {
            ss=s2;
            c=5;
        }
        cout<<s[c]<<" "<<ss<<endl;
    }
}

