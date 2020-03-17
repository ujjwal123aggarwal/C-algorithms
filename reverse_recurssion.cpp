#include<iostream>
using namespace std;

int* reversefun(int *a, int start, int end )
{
	if(start>=end)
	return 0;

	swap(a[start],a[end]);
	reversefun(a, start+1, end-1);
	return a;

}

int main() {
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int *p=reversefun(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<*(p+i)<<" ";

	return 0;
}
