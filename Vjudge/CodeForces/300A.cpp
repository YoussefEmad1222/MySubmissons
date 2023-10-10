#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
 
int main(){
    FIO
 
    int n;
    cin>>n;
    vector<int>vec(n);
 
    bool positive = 0;
 
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(vec[i]>0)
            positive = 1;
    }
    sort(vec.begin(), vec.end());
 
    vector<int>set1, set2, set3;
    int index = 1;
    set1.push_back(vec[0]);
 
    if(!positive){
        index = 3;
        set2.push_back(vec[1]);
        set2.push_back(vec[2]);
    }
 
    for(int i=index; i<n; i++){
        if(vec[i]<=0){
            set3.push_back(vec[i]);
        }
        else{
            set2.push_back(vec[i]);
        }
    }
 
  
 
    cout<<(int)set1.size()<<" ";
    for(int z: set1){cout<<z<<" ";}
    cout<<'\n';
 
    cout<<(int)set2.size()<<" ";
    for(int z: set2){cout<<z<<" ";}
    cout<<'\n';
 
    cout<<(int)set3.size()<<" ";
    for(int z: set3){cout<<z<<" ";}
    cout<<'\n';
}