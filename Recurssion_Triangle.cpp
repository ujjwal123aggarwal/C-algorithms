#include<iostream>
using namespace std;

void pattern(int n)
{
	if(n==0)
	return;
	pattern(n-1);
	for(int i=0;i<n;i++)
	cout<<"*"<<"\t";
	cout<<endl;
}

int main() {
	int n;
	cin>>n;
	pattern(n);
	return 0;
}
