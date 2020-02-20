#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int min,max,sum=0,temp,temp2,temp3;
	cin>>min>>max;
	for(int n=min;n<=max;n++)
	{
	temp=n;
	temp2 = n;
	temp3=n;
	int cont=0;
	while(temp3!=0)
	{cont++;
	temp3=temp3/10;}
	while(temp!=0)
	{
		int rem = temp%10;
		sum = sum + pow(rem,cont);
		temp=temp/10;
	}
	if(sum == temp2)
	cout<<sum<<endl;
	}
	return 0;
}
