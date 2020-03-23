#include<bits/stdc++.h>
using namespace std;

int mini(int m,int n)
{
	if(m>=n)
	return n;
	else
	return m;
}

int sizee(int n)
{
	int count = 0;
	while(n)
	{
		n=n/10;
		count++;
	}
	return count;
}

void invert(int n)
{
	int a[100],i=0;
	long long int sum=0;
	int l = sizee(n);
	while(i<l)
	{
		int rem = n%10;
		n = n/10;
		/*if(i==l-1 && rem == 9)
		a[i] == 9;
		else
		a[i] = min(rem,9-rem);*/
		if(i<l-1)
		a[i] = mini(rem,9-rem);
		else
		{
			if(rem==9)
			a[i] == 9;
			else
			a[i] = mini(rem,9-rem);
		}

		i++;
	}
	//cout<<i<<endl;

	for(int j=0;j<i;j++)
	{
		sum = sum + a[j]*pow(10,j);
	}
	cout<<sum;
}

int main() {
	long long int n;
	cin>>n;
	invert(n);
	return 0;
}
