#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0 ;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int l=0,r=n/2;
    while(l<n/2&&r<n){
        if(2*arr[l]<=arr[r] ){
            l++;
            r++;
            cnt++;
        }else{
            r++;
        }

    }
    cout<<n-cnt;

    return 0;
}
