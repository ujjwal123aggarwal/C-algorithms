#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int row=1;row<=n;row++)
	{
		for(int j=1;j<=row;j++)
		cout<<j;
		for(int j=1;j<=n-row;j++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
