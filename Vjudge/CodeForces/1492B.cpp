#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<int >vc(n),pos(n+1);
        for(int i=0 ; i<n; i++)
        {
            cin>>vc[i];
            pos[vc[i]]=i;
        }
        int cur=n;
        for(int i=n; i>0; i--)
        {
            if(pos[i]>=cur)
            {
                continue;
            }
            else
            {
                for(int j=pos[i]; j<cur; j++)
                {
                    cout<<vc[j]<<" ";
                }
                cur=pos[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
