#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,gcd,l,r;
    cin>>a>>b>>t;
    gcd=__gcd(a,b);
    set<int> st;
    for(int i=1; i*i<=gcd; i++)
    {
        if (gcd%i==0)
        {
            st.insert(i);
            st.insert(gcd/i);
        }
    }
    while(t--)
    {
        cin>>l>>r;
        auto it=upper_bound(st.begin(),st.end(),r);
        it--;
        if(*it>=l) cout<<*it<<'\n';

        else cout<<"-1"<<'\n';
        }
    return 0;
}
