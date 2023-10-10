#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long n,m;
        cin>>n>>m;
        if((n+m)&1){
            cout <<2<<"\n";
        }
        else{
            cout <<12<<"\n";

        }
    }

    return 0;
}
