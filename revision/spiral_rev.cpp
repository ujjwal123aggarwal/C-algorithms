#include<iostream>
using namespace std;

void spiral(int sr,int sc,int er, int ec, int a[][10])
{
    if(sr>er && sc>ec )
        return;

    for(int i=sc;i<ec;i++)
        cout<<a[sr][i]<<" ";

    for(int i=sr;i<er;i++)
        cout<<a[i][ec]<<" ";

    for(int i=ec;i>sc;i--)
        cout<<a[er][i]<<" ";
    for(int i=er;i>sr;i--)
        cout<<a[i][sc]<<" ";

    spiral(sr+1,sc+1,er-1,ec-1,a);
}


int main()
{
    int a[][10] = { {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    spiral(0,0,4,3,a);

}
