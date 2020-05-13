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
    ll n;
    cin>>n;
    ll a[n],b,c=0,d;
    loop
    {
        cin>>a[i];
    }
    b=a[0];
    for(ll i=1;i<n;i++)
    {
        if((b==2 && a[i]==3) || (b==3 && a[i]==2))
        {
            cout<<"Infinite"<<endl;
            return 0;
        }
        if(a[i]==2 && b==1 && i-2>=0 && a[i-2]==3)
        {
            c+=2;
            b=a[i];
        }
        else if((b==1 && a[i]==2) || (b==2 && a[i]==1))
        {
            c+=3;
            b=a[i];
        }
        else if((b==1 && a[i]==3) || (b==3 && a[i]==1))
        {
            c+=4;
            b=a[i];
        }
    }
    cout<<"Finite"<<endl;
    cout<<c<<endl;
}
