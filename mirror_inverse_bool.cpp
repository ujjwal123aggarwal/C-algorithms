#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int n,sum=0,temp;
	cin>>n;
	temp = n;
	int arr[100],i=0;
	while(n!=0)
	{
		int rem = n%10;
		arr[i] = rem;
		n=n/10;
		i++;
	}
	for(int j=1;j<=i+1;j++)
	{
		int out[i+1];
		out[arr[j-1]]=j;
		sum = sum + j*pow(10,arr[j-1]-1);
	}bool result;
	result = (sum==temp);
	cout << boolalpha;
	cout<<result;
	return 0;
}
