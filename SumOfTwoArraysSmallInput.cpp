#include<iostream>
#include<math>
using namespace std;

long int convertint(int *a, int m)
{	long int sum=0;
	for(int i=m-1;i>=0;i--)
	sum = sum + a[i]*pow(10,m-1-i);
	return sum;
}

int length(long int p)
{
	int count=0;
	while(p!=0)
	{
		p = p/10;
		count++;
	}
	return count;
}

int* convertarray(long int e)
{
	int arr[1000],i=0;
	while(e!=0)
	{
		arr[i]=e%10;
		e=e/10;
		i++;
	}
	return arr;
}
int main() {
	int m,n,a[1000],b[1000];
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>a[i];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>b[i];
	long int z = convertint(a,m);
	long int x = convertint(b,n);
	long int p = z + x;
	int l = length(p);
	int *q = convertarray(p);
	for(int i=l-1;i>=0;i--)
	cout<<*(q+i)<<", ";

	return 0;
}
