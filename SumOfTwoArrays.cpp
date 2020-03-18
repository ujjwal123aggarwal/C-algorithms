#include<iostream>
#include <cstdlib>
using namespace std;

int* sum(int m,int n,int *a,int *b)
{
	int *x={0},*y={0};
	for(int i=0;i<=abs(m-n);i++)
	{
		if(m>n)
		{
			*(x+m-n+i)=*(b+i);
			*(x+i)=0;
		}
		else
		{
			*(y+n-m+i)=*(a+i);
			*(y+i)=0;
		}
	}
	int *p, carry=0;
	for(int i=0;i<max(m,n)+1;i++)
	{
		*(p+i) = *(x+(m-1)) + *(y+(n-1)) + carry;
		if(*(p+i)>9)
		{
			carry=1;
			*(p+i) = *(p+i)%10;
		}
		else
		carry = 0;
		m--;
		n--;
	}
	if(carry==1)
	*(p+max(m,n))=1;
	else
        *(p+max(m,n))=0;
	return p;

}

int main() {
	int m,n,a[1000],b[1000];
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>a[i];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>b[i];
	int *p = sum(m,n,a,b);
	for(int i=max(m,n);i>=0;i--)
	cout<<*(p+i)<<", ";
	return 0;
}
