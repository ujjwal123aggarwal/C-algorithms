#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int max=INT_MIN,min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max = a[i];
		if(a[i]<min)
		min = a[i];
	}
	cout<<max<<"\n"<<min;
	return 0;
}
