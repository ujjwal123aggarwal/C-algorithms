#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	cin>>n;
	int great=INT_MIN;
	int a[n];
	for(int i=0;i<n;i++)
		{cin>>a[i];
		great = max(great,a[i]);}
	cout<<great;

	return 0;
}
