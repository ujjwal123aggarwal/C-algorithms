#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            int temp = a[i];
            int k = i-1;
            while(k>=0 && a[k]>0)
            {
                a[k+1] = a[k];
                k--;
            }
            a[k+1] = temp;
        }
    }

    for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }
}
