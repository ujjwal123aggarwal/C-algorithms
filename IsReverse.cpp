#include<iostream>
using namespace std;

void rev(string s1, string s2)
{
	int l = s1.length();
	bool a=1;
	for(int i=0;i<l/2;i++)
	swap(s1[i],s1[l-1-i]);
	if(s1==s2)
	{a = 1;
	cout<<boolalpha;
	cout<<a;
	}
	//return 1;
	else
	{
		a = 0;
		cout<<boolalpha;
		cout<<a;
	}
	//return 0;
}

int main() {
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	rev(s1,s2);

	return 0;
}
