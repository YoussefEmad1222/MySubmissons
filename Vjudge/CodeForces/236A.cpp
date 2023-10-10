#include <iostream>
#include<bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    FIO
    string str;
    cin >> str;
    set<char>st;
    for(char i:str){
        st.insert(i);
    }
    if(st.size()%2==0){
     cout<<"CHAT WITH HER!";
    }
    else{
    cout<<"IGNORE HIM!";
    }
    return 0;
}

