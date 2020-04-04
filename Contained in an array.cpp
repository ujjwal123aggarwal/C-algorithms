#include<iostream>
using namespace std;

bool is(int* a,int n,int m)
{
	if(n==0)
	return 0;
	if(a[0]==m)
	return true;
	return false;
	is(a+1,n-1,m);
}


int main() {
	int n,a[100],m;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	bool s = is(a,n,m);
	cout<<boolalpha;
	cout<<s;
	return 0;
}
