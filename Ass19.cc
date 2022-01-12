#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }cout<<i+1;

        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        if(i>0)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }cout<<n-i-1;
        for(int j=n;j>i+2;j--)
        {
            cout<<" ";
        }
        for(int j=n;j>i+2;j--)
        {
            cout<<" ";
        }
        if(i<n-2)
        {
            cout<<n-i-1;
        }

        cout<<endl;
    }
}
