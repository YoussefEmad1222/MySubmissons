#include <iostream>
#include <bits/stdc++.h>
#define fio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fio
    priority_queue<int,vector<int>,greater<int> >pq;
    deque<int>dq;
    int t,x=0;
    cin >>t;
    while(t--)
    {
        cin>>x;
        if(x==1)
        {
            int y;
            cin>>y;
            dq.push_back(y);
        }
        else if(x==2)
        {
            if(pq.empty())
            {
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
            else
            {
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        }
        else
        {
         for(auto i:dq){
            pq.push(i);
            dq.pop_front();
         }
        }
    }
    return 0;
}
