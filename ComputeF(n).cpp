#include<bits/stdc++.h>
using namespace std;
int main() {
	unsigned long long int t,n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long int sum=0;
		cin>>n;
		if(n%2==0)
		{
			sum = n/2;
			cout<<n/2<<endl;
		}
		else
		{
			sum = (n/2)-n;
			cout<<sum<<endl;
		}
	}
	return 0;
}
