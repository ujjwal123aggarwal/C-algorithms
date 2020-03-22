#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int row=1;row<=(n/2)+1;row++)
	{
		for(int i=1;i<=(n/2)+1-row;i++)
		cout<<"\t";
		for(int i=1;i<=(2*row-1);i++)
		cout<<"*"<<"\t";
		cout<<endl;
	}
	for(int row=1;row<=n/2;row++)
	{
		for(int i=1;i<=row;i++)
		cout<<"\t";
		for(int i=1;i<=n-2*row;i++)
		cout<<"*"<<"\t";
		cout<<endl;
	}

	return 0;
}
