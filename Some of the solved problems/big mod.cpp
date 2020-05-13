#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long b,long long p,long long m)
{
    if(p==0)
        return 1;
    if(p%2)
        return(((b%m)*bigmod(b,p-1,m))%m);
    else
    {
        long long l;
        l=bigmod(b,p/2,m);
        return(((l%m)*(l%m)))%m;
    }
}
int main()
{
    long long b,p,m,e,f,g;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        cout<<bigmod(b,p,m)<<endl;
    }
}
