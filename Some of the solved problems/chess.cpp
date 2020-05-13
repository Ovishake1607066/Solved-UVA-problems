#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,ro,cl,b,d,a;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>ro>>cl;
        if(c=='r')
        {
            cout<<min(ro,cl)<<endl;
        }
        else if(c=='k')
        {
            cout<<(ro*cl+1)/2<<endl;
        }
        else if(c=='K')
        {
            b=ro/2+ro%2;
            d=cl/2+cl%2;
            cout<<b*d<<endl;
        }
        else
        {
            d=min(ro,cl);
            cout<<d<<endl;
        }
    }
}
