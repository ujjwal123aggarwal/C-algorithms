#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int l = s.length();
	int sum=0;
	for(int i=0;i<l;i++)
	sum = sum + (s[i]-'0');
	cout<<sum;

	return 0;
}
