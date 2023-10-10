#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    bool flag = true;
    cin>>s;
    cin>>n;
    vector<pair<int,int >> vec (n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>vec[i].first;
        cin>>vec[i].second;
    }
    sort(vec.begin(),vec.end());
    for(int i=0 ; i<n; i++)
    {
        if(s > vec[i].first){
             s+=vec[i].second;
         }
         else{
            flag=false;
            break;
         }
    }
    cout<<((flag)?"YES":"NO");
    return 0;
}
