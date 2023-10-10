#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, test = 0;
    scanf("%d", &t);
    while(t--) {
        cin>>n;
        int a[100001] = {};
        for(int i = 1; i <= n; i++)
            scanf("%d", a+i);
        int k = 0, ans;
        for(int i = 1; i <= n; i++) {
            if(a[i]-a[i-1] > k)
                k = a[i]-a[i-1];
        }
        ans = k;
        for(int i = 1; i <= n; i++) {
            if(a[i]-a[i-1] == k)
                k--;
            else if(a[i]-a[i-1] > k) {
                ans++;
                break;
            }
        }
        test++;
        cout<<"Case "<<test<<":"<<" "<<ans<<"\n";
    }
    return 0;
}
