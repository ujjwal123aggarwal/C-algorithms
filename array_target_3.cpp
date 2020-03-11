#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],r[3];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int target;
	cin>>target;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int m=j+1;m<n;m++)
			{
			if((a[j]+a[i]+a[m])==target)
				{
					r = {a[i],a[j],a[m]};
					int rsize = sizeof(r)/sizeof(int);
					for(int e=0;e<rsize;e++)
					{
						for(int s=e+1;s<rsize;s++)
						{
							if(r[e]>r[s])
							swap(r[e],r[s]);
						}
					}
					cout<<r[0]<<", "<<r[1]<<" and "<<r[2];

			//cout<<min(a[i],a[j])<<" and "<<max(a[j],a[i])<<endl;
				}
			}
		}
	}
	return 0;
}
