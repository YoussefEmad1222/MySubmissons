#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
    int n,d;
    cin>>n>>d;
    vector<int> vec(n);
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
        if(d<vec[i])
        {
            flag=false;
        }
    }
    if(flag){
        cout<<"YES"<<'\n';
    }
    else{
      sort(vec.begin(),vec.end());
      if(vec[0]+vec[1]<=d){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
    }
    }
    return 0;
}
