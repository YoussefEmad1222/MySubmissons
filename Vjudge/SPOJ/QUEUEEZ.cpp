#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);



using namespace std;

int main()
{
    FIO
    long long int n,t,x;
    queue <int> st;
    cin >> t;
    for(int i=0 ; i < t ; i++){
        cin >> x;
        if(x==1){
            cin >> n;
            st.push(n);
        }
        else if (x==2){
            if(! (st.empty()) )
            {
                st.pop();
            }
        }
        else{
            if(! (st.empty()) ){
                cout<<st.front();
                cout<<'\n';
            }
            else{
                cout<<"Empty!";
                cout<<'\n';

            }
        }
    }
    return 0;
}
