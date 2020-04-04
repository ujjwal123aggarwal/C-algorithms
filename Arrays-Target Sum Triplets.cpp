#include<iostream>
#include <algorithm>
using namespace std;

void triplet(int* a,int n,int t)
{
   //int  count = 0;
   //int result[3];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int m=j+1;m<n;m++)
            {
				if(a[i] + a[j] + a[m]==t)
				{
					/*result[0] = a[i];
					result[1] = a[j];
					result[2] = a[m];
					sort(result, result+3);
					for(int k=0; k<3;k++)
						{
								cout<<result[k]<<"  ";
						}
						cout<<endl;*/
					cout<<a[i]<<", "<<a[j]<<" and "<<a[m]<<endl;
				}


            }
        }
    }

}

int main()
{
    int n,a[1000],t;
    cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>t;
	sort(a, a+n);
    triplet(a,n,t);

    return 0;
}
