#include <iostream>
#include<bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    FIO

    unordered_set <char>mp;

    string s;
     getline(cin,s);
    for(char i :s){
        if(isalpha(i)){
            mp.insert(i);
        }
    }
    cout<<mp.size();
    return 0;
}

