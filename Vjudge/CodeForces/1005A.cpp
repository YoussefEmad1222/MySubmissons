#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    FIO

    int n;
    cin>>n;
    vector<int> vec1(n),vec2;
    for(int i=0; i<n; i++){
        cin>>vec1[i];
    }
    for(int i=1; i<n; i++){
        if(vec1[i]==1){
            vec2.push_back(vec1[i-1]);
        }
    }
    vec2.push_back(vec1[n-1]);
    cout <<(int) vec2.size()<<'\n';
    for(int i=0; i<(int)vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
}
