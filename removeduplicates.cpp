#include<iostream>
using namespace std;

/*string duplicate(string s,int l)
{
	if(s[0]=='\0' || s[1]=='\0')
	return s;
	if(s[0]==s[1])
	{
		for(int i=2;i<=l;i++)
		s[i-1]  = s[i];
	}
	return duplicate(s, l-1);
}*/


int main() {
	string s;
	getline(cin,s);
	int l = s.length();
	if(s[0]=='\0' || s[1]=='\0')
	cout<<s;
	else{
	for(int i=0;i<l-1;i++)
	{
		if(s[i]==s[i+1])
		{
		for(int j=i+1;j<l;j++)
		s[j]  = s[j+1];
		}

	}
	cout<<s;
	}
	return 0;
}
