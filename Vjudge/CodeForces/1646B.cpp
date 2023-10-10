#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long n,sum_b=0,sum_r=0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0 ; i<n; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        if(n&1)
        {
            for(int i=0 ; i<=n/2; i++)
            {
                sum_b=sum_b+vec[i];

            }
            for(int i=n/2 +1 ; i<n; i++)
            {
                sum_r=sum_r+vec[i];

            }
            if(sum_r>sum_b)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
        else
        {
            for(int i=0 ; i<n/2; i++)
            {
                sum_b=sum_b+vec[i];

            }
            for(int i=n/2 +1 ; i<n; i++)
            {
                sum_r=sum_r+vec[i];

            }
            if(sum_r>sum_b)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }

        }
    }
    return 0;
}
