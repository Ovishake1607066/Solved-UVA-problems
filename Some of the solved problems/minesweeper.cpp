#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1,j,k;
    char a[200][200];
    int b[200][200];
    while(scanf("%d%d",&n,&m)==2 && n!=0 && m!=0)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                cin>>a[j][k];
                b[j][k]=0;
            }
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(a[j][k]=='*')
                {
                    b[j][k]='*';
                    if(b[j+1][k+1]!='*')
                        b[j+1][k+1]=b[j+1][k+1]+1;
                    if(b[j][k+1]!='*')
                        b[j][k+1]=b[j][k+1]+1;
                    if(b[j][k-1]!='*')
                        b[j][k-1]=b[j][k-1]+1;
                    if(b[j+1][k]!='*')
                        b[j+1][k]=b[j+1][k]+1;
                    if(b[j-1][k]!='*')
                        b[j-1][k]=b[j-1][k]+1;
                    if(b[j-1][k-1]!='*')
                        b[j-1][k-1]=b[j-1][k-1]+1;
                    if(b[j-1][k+1]!='*')
                        b[j-1][k+1]=b[j-1][k+1]+1;
                    if(b[j+1][k-1]!='*')
                        b[j+1][k-1]=b[j+1][k-1]+1;
                }
            }
        }
        if(i>1)
            cout<<endl;
        cout<<"Field #"<<i<<":"<<endl;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(b[j][k]=='*')
                    cout<<a[j][k];
                else
                    cout<<b[j][k];
            }
            cout<<endl;
        }
        i++;
    }
}
