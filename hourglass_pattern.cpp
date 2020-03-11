#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int row=n;row>=0;row--)
	{
		for(int j=0;j<=n-row;j++)
		cout<<" ";
		for(int j=row;j>=-row;j--)
		cout<<abs(j)<<" ";
		cout<<endl;
	}
	for(int row=1;row<=n;row++)
	{
		for(int j=n-row;j>0;j--)
		cout<<" ";
		for(int j=row;j>=-row;j--)
		cout<<abs(j)<<" ";
		cout<<endl;

	}


	return 0;
}
