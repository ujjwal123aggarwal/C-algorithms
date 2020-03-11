#include<iostream>
using namespace std;
int main() {
	int t,a,count=0,m=0;
	cin>>t;
	int result[t];
	for(int i=1;i<=t;i++)
	{
		cin>>a;
		while(a!=0)
		{
			int rem=a%2;
			if(rem==1)
			count++;
			a=a/2;
		}
		result[m]=count;
		m++;
		count=0;
	}
	for(int i=0;i<t;i++)
	cout<<result[i]<<endl;
	return 0;
}
