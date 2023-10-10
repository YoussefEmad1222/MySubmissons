#include <iostream>
#include<math.h>
#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fio
    string n,n2;
    cin>>n;
    n2=n;
    reverse(n.begin(), n.end());
    if (n2 == n)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        /* if not palindrome from first place */
        int num=stoi(n2);
        while(num%10==0)
        {
            num/=10;
        }
        n=to_string(num);
        n2=n;
        reverse(n.begin(), n.end());
        if (n2 == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
