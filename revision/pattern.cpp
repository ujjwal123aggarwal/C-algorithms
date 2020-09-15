#include<iostream>
using namespace std;


/*1 2 3 4 5
2 1 2 3 4
3 2 1 2 3
4 3 2 1 2
5 1 2 3 4*/
int main()
{
   int n;
   cin>>n;

   for(int row=1;row<=n;row++)
   {
       if(row==n)
       {
           cout<<n<<" ";
           for(int k=1;k<n;k++)
                cout<<k<<" ";
           cout<<endl;
           continue;
       }
       for(int i=row;i>=1;i--)
        cout<<i<<" ";
       for(int i=2;i<=n-row+1;i++)
        cout<<i<<" ";
       cout<<endl;
   }
}
