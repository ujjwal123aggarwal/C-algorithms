#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int* a = new int[n];
    int* dp = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //memset(dp,1,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i] = 1;



    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<=a[i])
            dp[i] = max(dp[i], dp[j]+1);
        }
    }

    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
        cout<<endl;

    int result = 0;
    for(int i=0;i<n;i++)
        result = max(result, dp[i]);
    cout<<result;
}
