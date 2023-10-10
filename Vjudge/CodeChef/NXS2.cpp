#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    long long int t,N,b=0,a=0;
    cin>>t;
    while(t--)
    {
        b=0;
        a=0;
        cin >>N;
        for(int i=1; i<=N; i++)
        {
            if ((i ^ N) >= i &&  (i^N) <= N)
            {
                a=(i);
                b=(N^i);
                break;
            }
        }
        if(a==0 || b==0 || a>=N ||b>N || a>b  )
        {
            cout<<-1<<'\n';
        }
        else
        {
            cout<<a<<" "<<b<<'\n';
        }
    }
    return 0;
}
