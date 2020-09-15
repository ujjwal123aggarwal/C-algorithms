#include<iostream>
using namespace std;;

bool same(int a[][10], int b[][10], int i, int j, int n, int m)
{
    for(int k=0;k<m;k++)
    {
        for(int l=0;l<m;l++)
        {
            if(b[k][l]!=a[k+i][l+j])
                return false;
        }
    }
    return true;
}

int main()
{
    int flag=0;
    int a[][10] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int b[][10] = {{6,7},{10,11}};

    for(int i=0;i<4-3+1;i++)
    {
        for(int j=0;j<4-3+1;j++)
        {
            if(a[i][j]==b[0][0] && same(a,b,i,j,4,2))
            {
                cout<<"YES"<<endl;
                flag=1;
            }
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;

}
