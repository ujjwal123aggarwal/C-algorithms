#include<iostream>
//#include<string>
using namespace std;

int strlen(string s)
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	count++;
	return count;
}

int main() {
	string s;
	getline(cin,s);
	int l = strlen(s);
    cout<<l;
}
