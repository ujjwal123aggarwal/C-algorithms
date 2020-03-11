#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int j=1;j<=n;j++)
		cout<<j<<" ";
		cout<<endl;
	for(int row=n-1;row>=1;row--)
	{
		for(int j=1;j<=row;j++)
		cout<<j<<" ";
		int d=2*(n-row)-1;
		for(int j=1;j<=d;j++)
		cout<<"*"<<" ";
		cout<<endl;
	}
	return 0;
}
