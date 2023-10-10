#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include<string>
#define fio  ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fio
    set<string> st;
    string str;
    while(cin>>str){
      string tmp="";

     for(char ch:str){
         ch= tolower(ch);
         if(isalpha(ch)){

            tmp+=ch;

         }
         else{
          if(!tmp.empty()){
            st.insert(tmp);
            tmp="";
          }
         }
     }
      if(!tmp.empty()){
       st.insert(tmp);
      }
    }
    for(string s:st){
        cout<< s <<'\n';
    }
    return 0;

}
