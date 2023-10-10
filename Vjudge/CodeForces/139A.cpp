#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i=0, a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> a[i];
    int sum = a[0];

    while (sum < n)
    {
        i++;
        i %= 7;
        sum += a[i];
    }

    cout << i + 1 << endl;
    return 0;
}
