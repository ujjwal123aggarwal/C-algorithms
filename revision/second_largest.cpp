#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,great = INT_MIN, gr = INT_MIN;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
    //int index;
    for(int i=0;i<n;i++)
    {
        if(a[i]>great)
        {
           // index = i;
            great = a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==great)
            continue;

        if(a[i]>gr)
        {
            //index = i;
            gr = a[i];
        }
    }
    cout<<gr<<endl;
}
