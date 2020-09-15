#include<iostream>
using namespace std;

int isprime(int n)
{
    int count = 1;;
    int data=2;
    if(n==1)
        return 2;
    data++;
    while(count!=n)
    {
       int flag=0;
       for(int i=2;i<data;i++)
       {
           if(data%i==0)
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
       data++;
       else
       {
           count++;
           data++;
       }
    }
    data--;
    return data;
}

int main()
{
    int n;
    cin>>n;
    int r = isprime(n);
    cout<<r<<endl;
}
