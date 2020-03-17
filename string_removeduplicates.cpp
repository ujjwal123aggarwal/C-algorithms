#include<iostream>
using namespace std;

int strlen(string s)
{
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	count++;
	return count;
}
string dublicate(string s)
{
	int l=strlen(s);
	for(int i=1;i<l;i++)
	{
		if(s[i]==s[i-1])
		{
			for(int j=i;j<l-1;j++)
			{
				s[j] = s[j+1];
			}s[l-1]='\0';
			l=l-1;

		}
	}return s;
}

int main() {
	string s;
	getline(cin,s);
	s = dublicate(s);
	cout<<s;
	return 0;
}
