#include <iostream>
#include<bits/c++io.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,d=0;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>d;
       vec.push_back(d);
    }
    sort(vec.begin(),vec.end());
    d=0;
    for(int i = 0;i<n;i++){
         if(i+1>=vec[i]){
            d=d+i+1-vec[i];
         }
         else{
          d=d+vec[i]-i-1;
         }
    }

    cout<<d;
    return 0;
}
