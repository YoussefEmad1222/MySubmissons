#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    queue<pair<int,int>> q;
    for (int i=1; i<=n; i++)
    {
        int x;
        cin>> x;
        q.push(make_pair(x,i));
    }
    while (q.size()>1)
    {
        if(q.front().first <=k)
        {
            q.pop();
        }
        else
        {
            pair<int,int> temp=q.front();
            temp.first=temp.first-k;
            q.pop();
            q.push(temp);
        }
    }
    cout<<q.front().second;
    return 0;
}