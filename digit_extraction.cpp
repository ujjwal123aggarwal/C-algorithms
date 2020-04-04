#include<iostream>
using namespace std;

int lengthh(int n)
{
	int count=0;
	while(n!=0)
	{
		count++;
		n = n/10;
	}
	return count;
}


int digit(int n,int pos)
{
	int l = lengthh(n);
	int rem;
	for(int i=1;i<=l+1-pos;i++)
	{
		rem = n%10;
		n = n/10;
	}
	return rem;
}


int main() {
	int n,pos;
	cin>>n>>pos;
	int d = digit(n,pos);
	cout<<d;

	return 0;
}
