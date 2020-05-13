#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,b,c,d,e,f,g,s=0;
        s=s+1;
        s=s+(n/5);
        s=s+(n/10);
        if(n/10>0)
        {

            if(n%10<5 && n/10>1)
            {
            if(n%10==0)
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
            else
                    for(int i=1;i<(n/10)+1;i++)
                    s=s+(2*i);
            }
            else if(n%10>5)
            {
                for(int i=1;i<(n/10)+1;i++)
                    s=s+(2*i)-1;
            }
        }
        s=s+(n/25);
        if(n/25>0)
        {
            if(n%25>10)
        {
            if(n%25==0)
                for(int i=1;i<(n/25)-1;i++)
                    s=s+(3*i);
            else
                for(int i=1;i<(n/25);i++)
                    s=s+(3*i);
                        if(n%10<5 && n/10>1)
            {
            if(n%10==0)
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
            else
                    for(int i=1;i<(n/10)+1;i++)
                    s=s+(2*i);
            }
            else
            {
                for(int i=1;i<(n/10)+1;i++)
                    s=s+(2*i)-1;
            }
        }
        else if(n%25>5)
        {
            if(n%10==0)
                for(int i=1;i<(n/10)-1;i++)
                    s=s+(2*i);
            else
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
        }
        }
        s=s+(n/50);
        if(n/50>0)
        {
            if(n%50>25)
        {
            if(n%50==0)
                for(int i=1;i<(n/50)-1;i++)
                    s=s+(4*i);
            else
                for(int i=1;i<(n/50);i++)
                    s=s+(4*i);
            if(n%25==0)
                for(int i=1;i<(n/25)-1;i++)
                    s=s+(3*i);
            else
                for(int i=1;i<(n/25);i++)
                    s=s+(3*i);
            if(n%10==0)
                for(int i=1;i<(n/10)-1;i++)
                    s=s+(2*i);
            else
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
        }
        else if(n%25>10)
        {
            if(n%25==0)
                for(int i=1;i<(n/25)-1;i++)
                    s=s+(3*i);
            else
                for(int i=1;i<(n/10);i++)
                    s=s+(3*i);
            if(n%10==0)
                for(int i=1;i<(n/10)-1;i++)
                    s=s+(2*i);
            else
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
        }
        else if(n%10>5)
        {
            if(n%10==0)
                for(int i=1;i<(n/10)-1;i++)
                    s=s+(2*i);
            else
                for(int i=1;i<(n/10);i++)
                    s=s+(2*i);
        }
        }
        if(s==1)
        cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else
        cout<<"There are "<<s<<" ways to produce "<<n<<" cents change."<<endl;

    }
}
