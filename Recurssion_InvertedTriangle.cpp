#include<iostream>
using namespace std;

void pattern(int n)
{
	if(n==0)
	return;
	for(int i=0;i<n;i++)
	cout<<"*"<<"\t";
	cout<<endl;
	pattern(n-1);
}

int main() {
	int n;
	cin>>n;
	pattern(n);
	return 0;
}
