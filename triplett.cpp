#include<iostream>
using namespace std;

void triplet(int n)
{
    int a[1000][5];
   int  count = 0;
    for(int i=10;i<n-4;i+=10)
    {
        for(int j=10;j<n-3;j+=10)
        {
            for(int m=10;m<n-2;m+=10)
            {
              for(int x=10;x<n-1;x+=10)
              {
                  for(int y=10;y<n;y+=10)
                  {
                        if((i+j+m+x+y)==n)
                        {
                            a[count][0] = i;
                            a[count][1] = j;
                            a[count][2] = m;
                            a[count][3] = x;
                            a[count][4] = y;
                            count++;
                        }
                  }
              }

            }
        }
    }
    for(int i=0; i<count;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" , ";
        }cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    triplet(n);

    return 0;
}
