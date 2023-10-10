#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include<string>
#define fio  ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
 priority_queue < int > mon;
 priority_queue< pair<int,int> > pol;
 set<int>st;
 int t,x,cos,id=0;
 cin>>t;
 while(t--){
   cin >>x;
   if(x==1){
    id++;
    cin >> cos;

    mon.push(-id);
    pol.push({cos,-id});
   }
   else if(x==2){
    while(st.count(-mon.top())){
        mon.pop();
    }

    st.insert(-mon.top());
    cout<<-mon.top()<<' ';
    mon.pop();
   }
   else{
     while(st.count(-pol.top().second)){
     pol.pop();
     }
     st.insert(-pol.top().second);
    cout<<-pol.top().second<<' ';
    pol.pop();
   }
 }
 return 0;

}
