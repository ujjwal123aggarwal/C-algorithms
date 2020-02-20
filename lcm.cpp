#include<iostream>
#include<climits>
using namespace std;
int main() {
	long int a,b;
	cin>>a>>b;
	long long int x=0;
	for(x=max(a,b);x<=INT_MAX;x++)
	{
		if(x%a==0 && x%b==0)
		{
			cout<<x;
			break;
		}
	}
	return 0;
}
