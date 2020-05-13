#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while(scanf("%s",s)!=EOF)
    {
        int l,a,b,c=0,d=0,i,j,m=0,n=1,p=0,q=0;
        l=strlen(s);
        for(i=0;i<l/2;i++)
        {
            if(s[i]==s[l-i-1])
            {
                n=1;
            }
            else
            {
                p=1;
                n=0;
                break;
            }
        }
        if(n==1)
        {
                for(j=0;j<l;j++)
                {
                    if((s[j]=='A' &&s[l-j-1]=='A') || (s[j]=='E'&&s[l-j-1]=='3')|| (s[j]=='H'&&s[l-j-1]=='H') || (s[j]=='I'&&s[l-j-1]=='I')||(s[j]=='J'&&s[l-j-1]=='L') || (s[j]=='L'&&s[l-j-1]=='J')||(s[j]=='M'&&s[l-j-1]=='M') || (s[j]=='O'&&s[l-j-1]=='O')||(s[j]=='S'&&s[l-j-1]=='2') || (s[j]=='T'&&s[l-j-1]=='T')|| (s[j]=='U'&&s[l-j-1]=='U') || (s[j]=='V'&&s[l-j-1]=='V')||(s[j]=='W'&&s[l-j-1]=='W') || (s[j]=='X'&&s[l-j-1]=='X')|| (s[j]=='Y'&&s[l-j-1]=='Y') || (s[j]=='Z'&&s[l-j-1]=='5')|| (s[j]=='1'&&s[l-j-1]=='1') || (s[j]=='2'&&s[l-j-1]=='S')||(s[j]=='3'&&s[l-j-1]=='E') || (s[j]=='5'&&s[l-j-1]=='Z')||(s[j]=='8'&&s[l-j-1]=='8'))
                    {
                        d=d+1;
                    }
                    else
                    {
                        c=1;
                        break;
                    }
                }
        }
        if(p==1)
        {
                for(j=0;j<l;j++)
                {
                 if((s[j]=='A' &&s[l-j-1]=='A') || (s[j]=='E'&&s[l-j-1]=='3')|| (s[j]=='H'&&s[l-j-1]=='H') || (s[j]=='I'&&s[l-j-1]=='I')||(s[j]=='J'&&s[l-j-1]=='L') || (s[j]=='L'&&s[l-j-1]=='J')||(s[j]=='M'&&s[l-j-1]=='M') || (s[j]=='O'&&s[l-j-1]=='O')||(s[j]=='S'&&s[l-j-1]=='2') || (s[j]=='T'&&s[l-j-1]=='T')|| (s[j]=='U'&&s[l-j-1]=='U') || (s[j]=='V'&&s[l-j-1]=='V')||(s[j]=='W'&&s[l-j-1]=='W') || (s[j]=='X'&&s[l-j-1]=='X')|| (s[j]=='Y'&&s[l-j-1]=='Y') || (s[j]=='Z'&&s[l-j-1]=='5')|| (s[j]=='1'&&s[l-j-1]=='1') || (s[j]=='2'&&s[l-j-1]=='S')||(s[j]=='3'&&s[l-j-1]=='E') || (s[j]=='5'&&s[l-j-1]=='Z')||(s[j]=='8'&&s[l-j-1]=='8'))
                    {
                        m=m+1;
                    }
                    else
                    {
                        q=1;
                        break;
                    }
                }
        }
        cout<<s<<" -- ";
        if(d==l)
        {
            cout<<"is a mirrored palindrome.";
        }
        else if(c==1)
        {
            cout<<"is a regular palindrome.";
        }
        else if(m==l)
            cout<<"is a mirrored string.";
        else
            cout<<"is not a palindrome.";
        cout<<endl<<endl;
    }
}
