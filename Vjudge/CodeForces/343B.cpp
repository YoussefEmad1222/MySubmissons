#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main()
{
    FIO

      string s;
      cin >> s;
    if((int)(s.size())%2!=0)
    {
        cout<<"No\n";
    }
    else
    {
        stack <char> st;
        for(char ch : s)
        {
            if (!st.empty())
            {
              if(ch==st.top()){
                st.pop();
              }else{
                 st.push(ch); 
              }
            }
            else{
               st.push(ch);
            }

        }
        if(st.empty())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}
