#include<iostream>
#include<string>
using namespace std;

void parenthesis(string s, int start, int end)
{
	//if(start>=end)
	//return;
	for(int i=0,j=0;s[i]!=0;i++,j++)
	{
		if(s[i]=='(')
		start = i+1;
		if(s[j]==')')
		end = j;
	}
	//parenthesis(s,start,end);
	for(int i=start;i<end;i++)
	cout<<s[i];

}

int main() {
	string s;
	cin>>s;
	int l = s.length();
	parenthesis(s,0,l);
	return 0;
}
