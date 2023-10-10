#include <iostream>
#include<string>
#include<bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    FIO
    int t,x;
    vector<string>vec;
    cin>>t;
       string str;
    priority_queue< int, vector<int>, greater<int> > pq;
    for(int i=0; i<t; i++)
    {
        cin>>str;
        if(str== "insert")
        {
            cin >> x;
            pq.push(x);
            vec.push_back("insert "+to_string(x));

        }
        else if(str=="removeMin")
        {
            if(!pq.empty()){
          pq.pop();
          vec.push_back("removeMin");
            }
            else{
                x=0;
                vec.push_back("insert "+to_string(x));
                vec.push_back("removeMin");      
            }
          
        }
        else if(str== "getMin"){
            cin >>x;
            while( !pq.empty()){
                if(x>pq.top()){
                 pq.pop();
                 vec.push_back("removeMin");
                }else{
                    break;
                } 
            }
            if(!pq.empty()){
            if(x!=pq.top()){
            pq.push(x);
            vec.push_back("insert "+to_string(x));
            }
                
            }else{
                pq.push(x);
                vec.push_back("insert "+to_string(x));
            }
            vec.push_back("getMin "+to_string(x));
        }
    }
    cout<<vec.size()<<'\n';
    for(string i:vec){
        cout<< i<<'\n';
    }
    return 0;
}
