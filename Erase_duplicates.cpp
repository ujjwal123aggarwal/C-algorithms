#include<iostream>
using namespace std;

void duplicate(int *a,int n)
{
	for(int m=0;m<n-1;m++)
	{
		int key = a[m];
		for(int i=m+1;i<n;i++)
		{
			if(a[i]==key)
			{
				if(i==(n-1))
				n--;
				else
				{
					for(int j=i+1;j<n;j++)
					a[j-1]=a[j];
					n--;
				}	i--;   //bcoz when it comes out of j loop, ith position should again be checked
			}

		}
	}
	for(int i=0;i<n;i++)
	cout<<*(a+i)<<" ";
}

int main() {
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	duplicate(a,n);
	return 0;
}
