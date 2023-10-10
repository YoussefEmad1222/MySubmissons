#include <iostream>
#include<math.h>
#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fio
    int x,y,n,z;
    bool flag=true;
    cin>>n>>x;
    while(n--)
    {
        cin>>y>>z;
        if(x==y||x==z||x==7-y||x==7-z)
        {
            flag=false;
        }
        x=7-x;
    }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
