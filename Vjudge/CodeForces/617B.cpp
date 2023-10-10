#include<bits/stdc++.h>
# define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;



void solve()
{
    long long n,pos=0,res=1;
    cin>>n;
    vector <long long> vec (n) ,ans;

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> vec[i];
        if(vec[i]==1)
        {
            pos++;
            ans.push_back(i);
        }
    }
    if(pos==0)
    {
        cout<<"0";
    }
    else if(pos==1)
    {
        cout<<"1";
    }
    else
    {
        for(int i=1 ; i<ans.size(); i++)
        {
         res=res*(ans[i]-ans[i-1]);
        }
        cout<<res;
    }
}
int main()
{
    fast
    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++)
    {
        solve() ;
    }

    return 0 ;
}
