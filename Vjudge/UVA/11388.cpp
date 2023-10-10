#include <iostream>
#include<algorithm>
using namespace std;
int lcm(int a,int b)
{
    return a/__gcd(a,b)*b;
}
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if( __gcd(a,b)==a &&lcm(a,b)==b)
        {
            cout<<a<<" "<<b<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}
