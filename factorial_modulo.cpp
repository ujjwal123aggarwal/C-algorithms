#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a=0;
		cin>>a;
		int fact=1;
		for(int j=1;j<=a;j++)
		fact = (fact*j)%107;
		sum = sum+fact;
	}
	int t=sum%107;
	cout<<t;
	return 0;
}
