#include <iostream>
#include<bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    FIO

    
    int t;
    cin>>t;
    string s;
    unordered_map <string, int>mp;
    for(int i = 0 ; i<t; i++)
    {
        
        
        cin>> s;
        if(mp.count(s))
        {
            cout<<s<<mp[s]<<'\n';
            
        }
        else
        {
            cout<<"OK\n";
        }
        mp[s]++;
    }
    return 0;
}

