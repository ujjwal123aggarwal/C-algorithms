#include<iostream>
using namespace std;

int main()
{
    int a[][10] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        int s=0,e=3;
        while(e>s)
        {
            swap(a[i][s],a[i][e]);
            s++;
            e--;
        }
    }

     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}
