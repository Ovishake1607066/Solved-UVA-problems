#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int p=0;p<n;p++)
    {
        int k,a2[110],m;
        double s1=0;
        char a1[110];
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>a1[i];
            cin>>a2[i];
        }
        cin>>m;
        getchar();
        for(int q=0;q<m;q++)
        {
            char s[10010];
            gets(s);
            int l=strlen(s);
            for(int i=0;i<l;i++)
            {
                for(int j=0;j<k;j++)
                {
                    if(s[i]==a1[j])
                    {
                        s1=s1+a2[j];
                        break;
                    }
                    else
                        s1=s1+0;
                }
            }
        }
        s1=s1/100;
        printf("%.2lf$\n",s1);
    }
}
