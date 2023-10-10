#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,r,l;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l*2<=r)
        {
            cout<<l<<" "<<2*l<<'\n';
        }
        else cout<<"-1"<<" -1"<<'\n';
    }
    return 0;
}