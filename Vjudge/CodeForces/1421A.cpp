#include <iostream>

using namespace std;

int main()
{
    long long t,a,b,z;
    cin>>t;
    while(t--){
        cin>>a>>b;
        z=a^b;
        cout<<z<<'\n';
    }
    return 0;
}
