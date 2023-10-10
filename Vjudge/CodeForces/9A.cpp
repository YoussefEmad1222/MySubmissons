#include <bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    int m=max(a,b);
    if(m==1){
       cout<<"1/1";
    }
    else if((6-m+1)%3==0){
        cout<<(6-m+1)/3<<"/"<<2;
    }
    else if((6-m+1)%2==0) {
        cout<<(6-m+1)/2<<"/"<<3;
    }
    else{
       cout<<(6-m+1)<<"/"<<6;
    }

    return 0;
}
