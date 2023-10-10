#include <bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.find("0000000")<s.size()||s.find("1111111")<s.size())
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
