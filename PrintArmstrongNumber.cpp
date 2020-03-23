#include<bits/stdc++.h>

using namespace std;

int sizee(int p)
{
	int count = 0;
	while(p!=0)
	{
		count++;
		p=p/10;
	}
	return count;
}

void armstrong(int n,int m)
{
	for(int i=n;i<=m;i++)
	{
		int digits = sizee(i);
		int temp = i;
		int sum = 0;
		while(temp!=0)
		{
			int rem = temp%10;
			sum = sum + pow(rem,digits);
			temp = temp/10;
		}
		if(sum == i)
		cout<<i<<endl;
	}
}

int main() {
	int n,m;
	cin>>n>>m;
	armstrong(n,m);
	//cout<<result<<endl;
	return 0;
}
