#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int n,sum=0,sum2=0;
	cin>>n;
	int i=0;
	while(n!=0)
	{
		int rem =n%10;
		sum = sum + rem*pow(8,i);
		i++;
		n=n/10;
	}int j=0;
	while(sum!=0)
	{
		int rem = sum%2;
		sum2 = sum2 + rem*pow(10,j);
		j++;
		sum = sum/2;
	}
	cout<<sum2;

	return 0;
}
