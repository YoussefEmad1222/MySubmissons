#include <iostream>
#include<bits/c++io.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,d,sum1=0,sum2=0;
    cin>>n;
    vector<int> vec1,vec2;
    for(int i=0; i<n; i++)
    {
        cin>>d;
        if(d>=0)
        {
            sum1=sum1+d;
        }
        else
        {
            sum2=sum2+d;
        }
    }
    d=sum1-sum2;
    cout<<d;
    return 0;
}
