#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    long long int t,n=0 ,sum,targ;

    cin>>t;
    while(t--)
    {
        bool flag=false;
        cin>>targ;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++)
        {
            cin >>arr[i];
        }
        for(int msk=0; msk<(1<<n); msk++)
        {
            sum=0;
            for(int i=0; i<n; i++)
            {
                if((msk>>i)&1)
                {
                    sum+=arr[i];
                }
            }
            if(sum==targ)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}
