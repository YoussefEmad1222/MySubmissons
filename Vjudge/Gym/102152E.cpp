#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0;
        bool flag=true;
        string s,c,p;
        cin>>n>>m;
        cin>>s>>c>>p;
        map <char,int> mp;
        for(int i=0; i<n; i++)
        {
            if(mp.count(s[i]))
            {
                mp[s[i]]=min(mp[s[i]],int(c[i])-48);
            }
            else
            {
                mp[s[i]]=int(c[i])-48;
            }
        }
        for(int i=0; i<m; i++)
        {
            if(mp.count(p[i]))
            {
                sum=sum+mp[p[i]];
            }
            else
            {
                flag=false;
                break;
            }
        }

        if(!flag)
        {
            cout<<"-1"<<"\n";
        }
        else
        {
            cout<<sum<<'\n';
        }
    }
    return 0;
}
