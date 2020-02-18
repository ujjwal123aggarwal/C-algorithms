#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	float d=pow(b,2)-4*a*c;
	float roots1 = (-b+sqrt(d))/2*a;
	float roots2 = (-b-sqrt(d))/2*a;
	if(d<0) cout<<"imaginary roots";
	else if(d=0)
	{
		cout<<"Real and Equal"<<endl;
		cout<<roots1<<" "<<roots2;
	}
	else
	{
		cout<<"Real and Distinct"<<endl;
		cout<<min(roots1,roots2)<<" "<<max(roots1,roots2);
	}
	return 0;
}
