#include <iostream>
using namespace std;

bool isanagram(string a,string s)
{
    //cout<<a<<" "<<s<<endl;

    int count[26] = {0};
    for(int i=0;a[i]!='\0';i++)
    count[a[i]-'a']++;

    for(int i=0;s[i]!='\0';i++)
    {
        if(count[s[i]-'a']!=0)
        count[s[i]-'a']--;
        else
        return false;
    }


    for(int i=0;i<26;i++)
    {
        //cout<<count[i]<<" ";

        if(count[i]!=0)
        return false;
    }
    cout<<endl;
    return true;

}

int main() {
    int n;
    cin>>n;
    cin.ignore();
   while(n--)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);

        bool result = isanagram(s1,s2);
        if(result==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	//code
	return 0;
}
