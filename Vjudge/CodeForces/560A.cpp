#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin >>n;
    for(int i=0 ;i<n;i++){
        cin>>s;
        if(s==1){
           cout<<"-1";
           return 0;
        }
    }
    cout<<"1";
    return 0;
}
