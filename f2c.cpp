#include<iostream>
using namespace std;
int main() {
	int min,max,step;
	cin>>min>>max>>step;

	for(int i=min;i<=max;i+=step)
	{
		int c = (5*(i-32))/9;
		cout<<i<<"\t"<<c<<endl;
	}
	return 0;
}
