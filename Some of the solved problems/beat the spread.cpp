#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i,j,m,n,a,b;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>m>>n;
        if(m<n || (m+n)%2!=0)
            cout<<"impossible"<<endl;
        else
        {
            a=(m+n)/2;
            b=m-a;
            cout<<a<<" "<<b<<endl;
        }
    }

}
