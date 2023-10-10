#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int m,n,c1,c2;
        cin>>m;
        c1=c2=0;
        for(int i=0 ;i<2*m;i++)
        {
            cin>>n;

            if(n%2==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if(c1==c2){
          cout<<"Yes"<<"\n";

        }else{
        cout<<"No"<<"\n";
        }
    }
    return 0;
}
