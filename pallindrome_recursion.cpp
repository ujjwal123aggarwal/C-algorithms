#include<iostream>
using namespace std;


bool pallindrome(int* a,int s,int e)
{
	if(s>=e)
	return 0;
	if(a[s]!=a[e])
	{
		return false;
	}
	return true;
	pallindrome(a,s+1,e-1);;
}

int main() {
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool s = pallindrome(a,0,n-1);
	cout<<boolalpha;
	cout<<s;

	return 0;
}
