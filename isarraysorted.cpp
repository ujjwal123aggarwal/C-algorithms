#include<iostream>
using namespace std;

bool issorted(int *a, int n)
{
	if(n==0 || n==1)
	return 0;

	if(a[0]>a[1])
	return false;
	return true;
	issorted(a+1,n-1);
}

int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool s = issorted(a,n);
	cout<<boolalpha;
	cout<<s;
	return 0;
}
