#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=a+b;
	cout<<a<<'\n'<<b<<endl;
	while(c<=n)
	{
		cout<<c<<endl;
		a=b;
		b=c;
		c=a+b;

	}
    return 0;
}
