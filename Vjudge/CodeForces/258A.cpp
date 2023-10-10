#include <iostream>
#include<bits/c++io.h>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int pos ;
    pos=s.find('0');
    if(pos == -1){
     cout<<s.substr(1);
    }
    else{
    cout<<s.substr(0,pos)<<s.substr(pos+1);
    }
    return 0;
}
