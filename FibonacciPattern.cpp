#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=0,b=1,c=0;

	for(int row=1;row<=n;row++)
	{
		int count=0;
		while(count!=row)
		{
			cout<<c<<"\t";
			count++;
			a=b;
			b=c;
			c = a+b;
		}
	cout<<endl;
	}


	return 0;
}
