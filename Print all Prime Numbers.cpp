#include<iostream>
using namespace std;
int main () {
	int n,i,flag=0;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			if(i==2)
			cout<<i;
			else
			cout<<", "<<i;
		}

	}
	return 0;
}
