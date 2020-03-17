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
	int carry=0;
	int sum[max(n,m)+1];
	for(int i=max(n,m);i>=0;i--)
	{
		sum[i] = a[n-1] + b[m-1] + carry;
		if(sum[i]>9)
		carry=1;
		else carry=0;
		n--;
		m--;
	}
	if(carry==1)
	{
		a[1]=a[1]%10;
		a[0]=1;
	}else a[0]=0;

	for(int j=0;j<=max(n,m);j++)
	cout<<sum[j];

	return 0;
}
