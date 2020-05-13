#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {cin>>s;
    if(s.size()==1)
    {
        if(s[0]=='0')
            break;
    }
    int r=0;
    for(int i=0;i<s.size();i++)
    {
        r=(r*10+(s[i]-'0'))%17;
    }
    if(r==0)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    }
}
