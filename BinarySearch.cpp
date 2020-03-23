#include<iostream>
using namespace std;

int binarysearch(int *a,int n,int m,int s,int e)
{
	int count=1,flag=0;
	while(s<=e)
	{
		int mid = (s + e)/2;
		if(a[mid]>m)
		{
			e = mid-1;
			count++;
			flag = 1;
		}
		else if(a[mid]<m)
		{
			s = mid+1;
			count++;
		}
		else if(a[mid]==m)
		{
			if(flag==1)
			{
				return n/(2*count);
			}
			else
			{
				return (n - n/(2*count));
			}
		}

	}
	return -2;

}

int main() {
	int n,a[100],m;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	int result = binarysearch(a,n,m,0,n-1);
	cout<<result;
	return 0;
}
