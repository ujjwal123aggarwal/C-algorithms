#include<iostream>
using namespace std;

bool mirror(int n)
{
	int a[100],i=0,flag=0;
	while(n!=0)
	{
		a[i] = n%10;
		n = n/10;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		if(a[a[j]-1]!=j+1)
		flag = 1;
	}
	if(flag==1)
	return false;
	else
	return true;
}

int main() {
	int t;
	long int n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		bool result = mirror(n);
		cout<<boolalpha;
		cout<<result<<endl;
	}
	return 0;
}
