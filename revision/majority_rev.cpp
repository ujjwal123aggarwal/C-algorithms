#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int* a = new int[n];
	    int maj,count=0;
	    cin>>maj;
	    a[0] = maj;
	    int data;
	    count++;
	    for(int i=1;i<n;i++)
	    {
	        cin>>data;
	        a[i] = data;
	        if(data==maj)
	        count++;
	        else if(data!=maj && count==1)
	        {
	            maj = data;
	            count=1;
	        }
	        else
	        count--;

	    }
	    count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==maj)
	        count++;
	    }
	    if(count>(n/2))
	    cout<<maj<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
