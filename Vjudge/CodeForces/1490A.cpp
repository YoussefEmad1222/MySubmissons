
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
 
const int N=1e7, M=1e9+1, Q=2e5+5, MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double EPS=1e-8;
 
 
int main(){
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
 
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int>arr(n);
        for(int &x : arr) cin>>x;
        for(int i=0; i<n-1; i++){
            int mx=max(arr[i],arr[i+1]);
            int mn=min(arr[i],arr[i+1]);
            while(mx>2*mn){
                mn*=2;
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
 
 
 
    return 0;
}