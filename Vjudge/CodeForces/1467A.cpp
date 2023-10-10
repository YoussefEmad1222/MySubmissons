#include <iostream>
#include<bits/stdc++.h>
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s="989";
    if (n <= 3){
    cout << s.substr(0, n);
    return;
    }
    cout<<s;
   for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
}
int main()
{

    FIO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
