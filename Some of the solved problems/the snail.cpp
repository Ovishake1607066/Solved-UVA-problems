#include<bits/stdc++.h>
using namespace std;
#define dd double
int main()
{
    dd h,u,d,f,a,b,c=0,s=0;
    while(cin>>h>>u>>d>>f && h!=0)
    {
        c=0;
        s=0;
        a=(f/100.0)*u;
        while(1)
        {
            s=s+u-d;
            c++;
            u=u-a;
            if(u<0)
                u=0;
            if(s<0)
            {
                cout<<"failure on day "<<(int)c<<endl;
                break;
            }
            else if(s+d>h)
            {
                cout<<"success on day "<<(int)c<<endl;
                break;
            }
        }
    }
}
