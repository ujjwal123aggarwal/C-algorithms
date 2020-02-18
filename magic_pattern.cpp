#include<iostream>
using namespace std;
#define t 2*n-1
int main() {
	int n;
	cin>>n;
	for(int i=n;i>=2;i--)
	{
		for(int j=1;j<=t;j++)
		{
			if(j>i && j<=t-i)cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=t;j++)
		{
			if(j>i && j<=t-i)cout<<" ";
			else cout<<"*";
		}
		cout<<endl;

	}
	return 0;
}
