#include <bits/stdc++.h>
#define MAX 500
using namespace std;
 
int main()
{
    int size;
    bool flag = true;
    cin>>size;
    int top;
    cin>>top;
    for(int i=0;i<size;i++)
    {
        int x,y;
        cin>>x>>y;
        if( x == top || x == 7 - top)
            {
                cout<<"NO";
                return 0;
            }
        if( y == top || y == 7 - top)
            {
                cout<<"NO";
                return 0;
            }
    }
    cout<<"YES";
 return 0;
}