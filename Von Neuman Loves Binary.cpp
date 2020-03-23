#include<bits/stdc++.h>
using namespace std;

int b2d(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int sum = 0,m=0;
		while(a[i]!=0)
		{
			int rem = a[i]%10;
			sum = sum + rem*pow(2,m);
			m++;
			a[i] = a[i]/10;
		}
		cout<<sum<<endl;
	}
}

int main() {
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	b2d(a,n);
	return 0;
}
