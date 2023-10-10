#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> vec (n,0);
    for(int i=0 ; i<n ;i++){
        cin>>x;
        vec[x]++;
    }
    for(int i=0 ; i<100;i++){
       cout<<vec[i]<<' ';
    }
    return 0;
}

