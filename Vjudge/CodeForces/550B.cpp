#include <iostream>
#include <bitset>
#include<bits/stdc++.h>

using namespace std;
//5 25 35 10 10 10 20 10 20

int main()
{
    long long l=0,r=0,dif=0, minn = INT_MAX,maxx = INT_MIN , sum=0,cnt=0;
    long long n;
    cin >> n;
    cin>> l;
    cin>> r ;
    cin>> dif;
    int arr[n] = {0};
    for(int i=0; i < n ; i++ )
    {
        long long x;
        cin >>x;
        arr[i]=x;
    }

    for(int msk=0; msk<(1<<n); msk++)
    {
        sum=0;
        minn = INT_MAX;
        maxx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if((msk>>i)&1)
            {
                sum+=arr[i];
                maxx=max(maxx,(long long)arr[i]);
                minn=min(minn,(long long)arr[i]);
            }
        }
        if( sum<=r && sum>=l && maxx-minn >=dif)
        {
            
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
