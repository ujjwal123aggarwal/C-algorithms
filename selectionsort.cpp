#include<iostream>
using namespace std;

int* selectionsort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int less = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[less])
			swap(a[j],a[less]);
		}
	}return a;
}

int main() {
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int *p = selectionsort(a,n);
	for(int i=0;i<n;i++)
	cout<<*(p+i)<<endl;
	return 0;
}
