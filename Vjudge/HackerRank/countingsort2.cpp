#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> vec (n,0);
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        vec[x]++;
    }
    for(int i=0 ; i<n; i++)
    {
        while(vec[i])
        {
        cout<<i<<' ';
        vec[i]--;
        }
    }
    return 0;
}
