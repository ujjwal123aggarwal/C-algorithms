#include<iostream>
using namespace std;


bool ways(int a[][100], int n, int m, int i,int j, int sol[][100])
{
	if(i==n-1 && j==m-1)
	{
		sol[i][j] = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
		}return true;
	}

	sol[i][j] = 1;

	if(j+1<m && ways(a,n,m,i,j+1,sol))
	{
		sol[i][j+1] = 1;
		//return true;
	}
	else
	{
		return false;
	}


	if(i+1<n && ways(a,n,m,i+1,j,sol))
	{
		sol[i+1][j] = 1;
		//return true;
	}
	else
	{
		return false;
	}

}

int main() {
	int n,m,a[100][100],sol[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j] = 0;
		}
	}
	ways(a,n,m,0,0,sol);
	return 0;
}
