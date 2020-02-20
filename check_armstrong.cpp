#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int n,sum=0,temp,temp2;
	cin>>n;
	temp=n;
	temp2 = n;
	int cont=0;
	while(n!=0)
	{cont++;
	n=n/10;}
	while(temp!=0)
	{
		int rem = temp%10;
		sum = sum + pow(rem,cont);
		temp=temp/10;
	}
	bool result= (sum == temp2);
	cout<<boolalpha;
	cout<<result;
	return 0;
}
