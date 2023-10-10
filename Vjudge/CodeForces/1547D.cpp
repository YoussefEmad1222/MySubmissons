#include <iostream>
#include<bits/stdc++.h>
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n),res = {0};
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0;
        return;
    }
    int prevNum = arr[0];

    for (int i=1; i<n; i++)
    {

        int num = 0;

        for (int j=32; j>=0; j--)
        {
            if (((prevNum & (1 << j)) != 0) && ((arr[i] & (1 << j)) == 0))
            {
                num = num | (1 << j);
            }
        }

        res.push_back(num);
        prevNum = arr[i] ^ num;
    }
    for (int i=0; i<n; i++)
    {
        cout<<res[i]<<" ";
    }
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
