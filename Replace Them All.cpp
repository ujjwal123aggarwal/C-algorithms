#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,a[100],i=0,sum=0;
	cin>>n;
	if(n==0)
	sum = 5;
	while(n!=0)
	{
		a[i] = n%10;
		n=n/10;
		i++;
	}
	//for(int j=0;j<n;j++)
	//cout<<a[j]<<" ";
	for(long long int j=0;j<i;j++)
	{
		if(a[j]==0)
		a[j] = 5;
		sum  = sum + a[j]*pow(10,j);
	}
	cout<<sum;
	return 0;
}
