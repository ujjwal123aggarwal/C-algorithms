#include<iostream>
using namespace std;


void intersection(int* a,int *b, int n)
{
	int z=0,x=0,k=0,key[100],result[100],y=0;
	for(int i=0;i<n;i++)
	{
		int flag =0 ;
		for(int r=0;r<=y;r++)
		{
			if(key[r]==a[i])
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
		key[y] = a[i];
		y++;
		for(int j=0;j<n;j++)
		{
			if(a[j]==key[i])
			z++;
			if(b[j]==key[i])
			x++;
		}
		int d = min(z,x);
		if(d!=0)
		{
			for(int h=0;h<d;h++)
				{
					result[k] = key[i];
					k++;
				}
		}
		}
	}
	for(int i=0;i<k;i++)
	cout<<result[i]<<" ";

}


int main() {
	int n,a[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	intersection(a,b,n);
	return 0;
}
