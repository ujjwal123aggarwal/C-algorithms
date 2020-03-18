#include<iostream>
using namespace std;

int index(int *a,int n, int target, int i)
{
	if(n==0)
	return -1;
	if(a[0]==target)
	return i;
	else
	index(a+1,n-1,target,i+1);
}

int main() {
	int n,a[100],target;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>target;
	int result = index(a,n,target,0);
	cout<<result;
	return 0;
}
