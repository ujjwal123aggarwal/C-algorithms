#include<iostream>
using namespace std;
int main() {
	unsigned int n;
	cin>>n;
	long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[n-1-i]=a[i];
	}
	for(int i=0;i<n;i++)
	cout<<b[i]<<endl;
	return 0;
}
