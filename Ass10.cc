#include<iostream>
using namespace std;
int main()
{char c;
int n;
cin>>n;
    for(int i=0;i<n;i++)
    {c='A'+(n-i-1);
        for(int j=0;j<i;j++)
         {
             cout<<" ";
         }cout<<c<<" ";
        for(int j=0;j<n-i-2;j++)
         {
             cout<<" ";
         }
         for(int j=n-i-1;j>0;j--)
         {
            cout<<" ";
         }
         if(i<n-1)
         {
             cout<<c;
         }

         cout<<endl;
    }
}
