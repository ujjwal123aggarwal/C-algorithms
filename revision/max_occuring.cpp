#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int count=1,great=a[0];
    for(int i=1;i<n;i++)
    {
        if(count==1 && a[i]!=great)
        {
            count=1;
            great = a[i];
        }
        else if(a[i]!=great)
            count--;
        else count++;
    }
    cout<<great<<endl;
}
