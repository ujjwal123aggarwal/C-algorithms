#include<iostream>
using namespace std;
int main() {
	unsigned int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int target;
	cin>>target;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[j]+a[i])==target)
			cout<<min(a[i],a[j])<<" and "<<max(a[j],a[i])<<endl;
		}
	}return 0;
}
