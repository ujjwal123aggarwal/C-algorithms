#include<bits/stdc++.h>
#include<string>
using namespace std;

void toint(string s)
{
	int n=0;
	int l = s.length();
	int j= l-1;
	for(int i=0;i<l;i++)
	{
		n = n + (s[j]-'0')*pow(10,i);
		j--;
	}
	cout<<n;
}



int main() {
	string s;
	getline(cin,s);
	toint(s);
	return 0;
}
