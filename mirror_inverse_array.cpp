#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,temp=0;
	cin>>n;
	int a[n],out[n];
	for(int j=0;j<n;j++)
	cin>>a[j];
	for(int j=0;j<n;j++)
	{
		out[a[j]]=j;
	}bool result=false;
	for(int j=0;j<n;j++)
	{
		if(a[j]!=out[j])
		{temp=1;
		break;}
	}
	if(temp!=1)
	result=true;
	cout << boolalpha;
	cout<<result;
	return 0;
}
