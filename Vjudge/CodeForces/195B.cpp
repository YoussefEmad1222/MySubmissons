#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<int> q;
    if(m&1){
        q.push((m+1)/2);
    }
    for(int i=m/2;i>0;i--){
       q.push(i);
       q.push(m-i+1);
    }
    while(n--){
        cout<<q.front()<<"\n";
        q.push(q.front());
        q.pop();
    }
    return 0;
}
