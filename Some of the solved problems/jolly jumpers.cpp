#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n && n!=0)
    {
        long long int a,b,c=0,a2[n],k,l=0;
        for(int i=0,j=0;i<n;i++)
        {
            cin>>a;
            if(i==0)
            {
                b=a;
                continue;
            }
            a2[j]=abs(b-a);
            j++;
            b=a;
        }
        sort(a2,a2+n-1);
        for(int i=0,k=1;i<n-1;i++)
        {
            if(a2[i]==k)
                {
                    l=k;
                    k++;
                }
        }
        if(l!=n-1)
            cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
    }
}
