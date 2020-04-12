#include<iostream>
#include<cmath>
using namespace std;

bool canplace(int a[][10], int n,int i,int j,int m)
{
	for(int k=0;k<n;k++)
	{
		if(k!=j && a[i][k]==m)
		return false;
		if(k!=i && a[k][j]==m)
		return false;
	}

    n = sqrt(n);
	int row = (i/n) * n;
	int col = (j/n) * n;

	for(int i=row;i<row+n;i++)
	{
		for(int j=col;j<col+n;j++)
		{
			if(a[i][j]==m)
			return false;
		}
	}
	return true;
}



bool sudoku(int a[][10], int n,int i,int j)
{
	if(i==n)
	{
		for(int k=0;k<n;k++)
		{
			for(int l=0;l<n;l++)
			{
				cout<<a[k][l]<<" ";
			}cout<<endl;
		}return true;
	}

	if(j==n)
        return sudoku(a,n,i+1,0);

	if(a[i][j]==0)
	{
		for(int m=1;m<=n;m++)
		{

			bool place = canplace(a,n,i,j,m);
			if(place==true)
			{
			    a[i][j] = m;
				bool baatbani = sudoku(a,n,i,j+1);
				if(baatbani==true)
				{
					return true;
					//break;
				}
				else
                    a[i][j] = 0;
			}
		}
	}
	else
        return sudoku(a,n,i,j+1);

return false;
}


int main() {
	int n,a[10][10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl;
	sudoku(a,n,0,0);
	return 0;
}
