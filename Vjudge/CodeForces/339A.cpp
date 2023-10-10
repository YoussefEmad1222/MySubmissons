#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fio
   string n;
   priority_queue<char,vector<char>,greater<char> > st;
   cin>>n;
   for(char i:n){
    if(isdigit(i)){
        st.push(i);
    }
   }
   while((int)st.size()>0){
        cout<<st.top();
        st.pop();
        if(!st.empty()){
            cout<<'+';
        }
   }
   return 0;
}
