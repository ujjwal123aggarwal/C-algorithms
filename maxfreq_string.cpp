#include<bits/stdc++.h>
#include<string>
using namespace std;

char maxchar(string a)
{
	int count[256] = {0};
	int great = 0,i,m;
	char index;
	//int l = strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		int y = a[i];
		count[y]++;
	}
	for(m=0;m<256;m++)
	{
		if(count[m]>great)
		{ great = count[m];
		index = m;
		}
	}
	return index;
}

int main() {
	string a;
	getline(cin,a);
	char m = maxchar(a);
	cout<<m;
	return 0;
}
