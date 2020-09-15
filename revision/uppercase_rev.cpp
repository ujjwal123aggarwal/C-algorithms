#include <iostream>
#include<cstring>
using namespace std;

/*int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int i=0;
	    	char a[1001];
	    	while(1)
	    	{
	    	    cin>>a[i];
	    	    if(a[i]=='\0')
	    	    break;

	    	    if(i==0)
	    	    a[i] = a[i] + 32;

	    	    else if(a[i-1]==' ')
	    	    a[i] = a[i] + 32;

	    	    i++;
	    	}
	    	i=0;
	    	while(a[i]!='\0')
	    	{
	    	    cout<<a[i];
	    	    i++;
	    	}

	}



	return 0;
}*/


int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    if(s[0]>=97)
	    s[0] = s[0] - 32;
	    for(int i=1;s[i]!='\0';i++)
	    {
	        if(s[i]==' ')
	        s[i+1] = s[i+1] - 32;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
