#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int sumdig(long long n)
{
long long tmp=n,sumdig=0;
    while(tmp)
    {
     sumdig+=tmp%10;
     tmp/=10;
    }
    return sumdig;
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long int n;
        cin >> n;
        if(__gcd(n,sumdig(n))>1){
            cout<<n<<"\n";
        }
        else if(__gcd(n+1,sumdig(n+1))>1){
            cout<<n+1<<"\n";
        }
        else if(__gcd(n+2,sumdig(n+2))>1){
            cout<<n+2<<"\n";
        }
    }
    return 0;
}
