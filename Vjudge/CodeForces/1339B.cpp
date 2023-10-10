#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
    int n ;cin>>n;
    vector<int> vec(n) ,res;
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
      sort(vec.begin(),vec.end());
      if(n&1){
        res.push_back(vec[n/2]);
      }
      for(int i= n/2-1 ; i>=0;i--)
     {
         res.push_back(vec[i]);
         res.push_back(vec[n-i-1]);
     }
     for(int i=0; i<n; i++)
     {
        cout<<res[i]<<" ";
     }
     cout<<"\n";
    }
    return 0;
}
