#include<iostream>
using namespace std;
int main() {
	int n1,n2,n=1,count=0;
	cin>>n1>>n2;
	while(n>0)
	{
		int d = 3*n+2;
		n++;
		if(d%n2!=0)
		{
			cout<<d<<endl;
			count++;
			if(count==n1)
			break;
		}
	}
	return 0;
}
