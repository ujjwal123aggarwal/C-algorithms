#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int b[1000];
	for(int i=0;i<m;i++)
	cin>>b[m];

	if(m>n)
	{
		for(int i=n-1;i>=0;i--)
		a[i+(m-n)]=a[i];
		for(int i=0;i<m-n;i++)
		a[i]=0;
	}
	else if(n>m)
	{
		for(int i=m-1;i>=0;i--)
		a[i+(n-m)]=a[i];
		for(int i=0;i<n-m;i++)
		a[i]=0;
	}


	int carry=0;
	//int mx = max(n,m);
	int sum[m+1];
	for(int i=m;i>=0;i--)
	{
		sum[i] = a[i-1] + b[i-1] + carry;
		if(sum[i]>9)
		{carry=1;
		sum[i]=sum[i]%10;}
		else carry=0;
		//m--;
	}
	if(carry==1)
	{
		a[1]=a[1]%10;
		a[0]=1;
	}else a[0]=0;

	for(int j=0;j<=m;j++)
	cout<<sum[j];



	return 0;
}
