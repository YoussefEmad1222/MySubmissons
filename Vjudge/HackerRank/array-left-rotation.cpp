#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int d,n,x;
    cin>>n>>d;
    deque <int> vec;
    for(int i=0 ; i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    d=d%(int)vec.size();
    for(int i=0 ; i<d;i++){
     x=vec.front();
     vec.pop_front();
     vec.push_back(x);
    }
    for(int i=0 ; i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
