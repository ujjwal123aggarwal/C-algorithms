/*Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

Write a function that returns its inverse, where inverse is defined as follows

Inverse of 32145 is 12543. In 32145, �5� is at 1st place, therefore in 12543, �1� is at 5th place; in 32145, �4� is at 2nd place, therefore in 12543, �2� is at 4th place.

Print the value returned.

Input Format
Integer

Constraints
0 < N < 1000000000

Output Format
Integer

Sample Input
32145
Sample Output
12543
Explanation
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, �5� is at 1st place, therefore in 12543, �1� is at 5th place; in 32145, �4� is at 2nd place, therefore in 12543, �2� is at 4th place.
*/





#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int n,sum=0;
	cin>>n;
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
	}
	cout<<sum;
	return 0;
}