#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int nn=0;
    while(cin>>s)
    {
        if(nn>0)
            cout<<endl;
        int i=0,j=0,k=0,l=0;
        int r1=0,r2=0,r3=0,r4=0,r5=0;
        for(int i=0;i<s.size();i++)
        {
            r1=((r1*10)+(s[i]-'0'))%15;
            r2=((r2*10)+(s[i]-'0'))%4;
            r3=((r3*10)+(s[i]-'0'))%100;
            r4=((r4*10)+(s[i]-'0'))%400;
            r5=((r5*10)+(s[i]-'0'))%55;
        }
        if(r1==0)
            j=1;
        if(r2==0)
        {
            if(r3==0 && r4!=0)
                i=0;
            else
                i=1;
        }
        if(i==1)
        {
            if(r5==0)
                k=1;

        }
        if(i==1)
            cout<<"This is leap year."<<endl;
        if(j==1)
            cout<<"This is huluculu festival year."<<endl;
        if(k==1)
            cout<<"This is bulukulu festival year."<<endl;
        if(i==0 && j==0)
            cout<<"This is an ordinary year."<<endl;
        nn++;
    }
}
