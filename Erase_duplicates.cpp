#include<iostream>
using namespace std;

void duplicate(int *a,int n)
{
	if(n==0)
	{
	return;
	}

	int key = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]==key)
		{
			for(int j=i+1;j<n;j++)
			a[j-1]=a[j];
			n--;
		}
	}
	duplicate(a+1,n-1);
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
