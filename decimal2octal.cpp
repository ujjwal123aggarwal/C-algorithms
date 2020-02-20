#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int n,sum=0;
	int i = 0;
	cin>>n;
	while(n>=0)
	{
		int d =  n%8;
		sum = sum + d*pow(10,i);
		if(n==0)
		break;
		i++;
		n=n/8;
	}
	cout<<sum;
	return 0;
}
