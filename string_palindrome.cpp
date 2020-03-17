#include<iostream>
#include<cstring>
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
	bool flag=0;
	for(int i=0;i<=l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			flag = 1;
			break;
		}
	}
	bool status;
	if(flag==1){
	status = 0;}
	else
	status=1;
	cout<<boolalpha;
	cout<<status;


	return 0;
}
