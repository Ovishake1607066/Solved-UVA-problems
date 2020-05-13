#include<iostream>
using namespace std;
int main()
{
    int i;
    float j,k,c=0;
    for(i=2;i<31;i++)
    {
        if(i%2==0 || i%3==0 ||i%5==0)
        {
            c=c+1;
        }
    }
    j=(1500-1)/c;
    k=30*j;
    cout<<"The 1500'th ugly number is "<<(int)k<<".";

}
