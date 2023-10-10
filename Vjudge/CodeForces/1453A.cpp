#include <iostream>
#include<bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    FIO


    int t;
    cin>>t;
    for(int i=0 ;i<t;i++)
    {
        set<int>mp;
        int x,n,m;;
        cin>>n>>m;
        for(int i=0 ;i<m+n;i++){
            cin>>x;
            mp.insert(x);
        }
        
        cout<<m+n - (int)mp.size()<<'\n';

    }
   return 0;
}
