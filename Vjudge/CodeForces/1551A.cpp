#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n,c1,c2;
        cin>>n;
        c2=c1=n/3;
        if(n%3==1)
        {
            c1++;
        }
        else if(n%3==2)
        {
            c2++;
        }
        cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}
