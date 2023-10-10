#include <iostream>
#include<bits/c++io.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,d;
    cin>>n>>k;
    priority_queue<int,vector<int> , greater<int> >st;
    for(int i=0;i<n;i++){
        cin>>d;
       st.push(d);
    }
    d=0;
    for(int i=0;i<k;i++){
      if( (st.top()) <=0){
       d=d-st.top();
      }
      st.pop();
    }
    cout<<d;
    return 0;
}
