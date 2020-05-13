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
    string  s;
    while(getline(cin,s))
    {
        ll c=0;
        stringstream ss(s);
        string s2;
        while(ss>>s2)
        {
            ll cc=0;
            for(ll i=0; i<s2.size(); i++)
            {
                if((s2[i]<='z' && s2[i]>='a') ||(s2[i]<='Z' && s2[i]>='A'))
                {
                    cc=1;
                }
                else
                {
                    if(cc)
                        c++;
                    cc=0;
                }
            }
            if(cc)
                c++;
        }
        cout<<c<<endl;
    }

}

