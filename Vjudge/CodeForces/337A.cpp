#include <iostream>
#include<bits/c++io.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,k,d;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0;i<k;i++){
        cin>>d;
       vec.push_back(d);
    }
    sort(vec.begin(),vec.end());
    d=vec[n-1]-vec[0];
    for(int i=n-1;i<k;i++){
        d=min(d,vec[i]-vec[i-n+1]);
    }

    cout<<d;
    return 0;
}
