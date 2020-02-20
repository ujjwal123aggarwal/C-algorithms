#include<iostream>
using namespace std;
int main() {
	long int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m,flag=0;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{cout<<i;
		flag=1;
		break;}
	}
	if(flag!=1)cout<<"-1";
	return 0;
}
