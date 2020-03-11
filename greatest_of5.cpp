#include<iostream>
#include<climits>
using namespace std;
int main () {
	int n,great=INT_MIN;
	for(int i=1;i<=5;i++)
	{
		cin>>n;
		if(n>great)
		great=n;
	}
	cout<<great;
	return 0;
}
