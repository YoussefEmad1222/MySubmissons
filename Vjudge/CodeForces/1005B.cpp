#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{


        string n,m;
        cin>>n>>m;
        while(true)
        {
            if((m[m.size()-1]==n[n.size()-1])&&n.size()&&m.size())
            {
                n.pop_back();
                m.pop_back();
            }
            else
            {
                break;
            }
        }
        cout<<m.size()+n.size();
    return 0;
}
