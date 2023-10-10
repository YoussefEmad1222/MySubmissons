#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;

    cin>>s;
    while(s--)
    {
        cin>>n;
        vector<int> vec (n);
        for(int i=0 ; i<n ; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        while(vec[(int)vec.size()-1]>(int)vec.size() &&(int)vec.size()>0 )
        {
            vec.pop_back();
        }
        cout<<(int)vec.size()+1<<"\n";
        
    }
    return 0;
}
