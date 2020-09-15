#include<iostream>
using namespace std;


bool maze(int a[][10], int sol[][10], int i,int j,int n,int m)
{
    if(i==n-1 && j==m-1)
    {
        sol[i][j]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<sol[i][j]<<" ";
            }cout<<endl;
        }cout<<endl;
        return false;
    }

    sol[i][j] = 1;

    if(a[i][j+1]!=0 && j+1<m)
    {
        bool right = maze(a,sol,i,j+1,n,m);
        if(right)
            return true;
    }

    if(a[i+1][j]!=0 && i+1<n)
    {
        bool down = maze(a,sol,i+1,j,n,m);
        if(down)
            return true;
    }
    sol[i][j] = 0;
    return false;
}

int main()
{
    int a[10][10] = {{1, 0, 0, 0},
                       {1, 1, 0, 1},
                       {1, 1, 0, 0},
                       {0, 1, 1, 1}};

    int sol[10][10] = {0};

     maze(a,sol,0,0,4,4);
     return 0;
}
