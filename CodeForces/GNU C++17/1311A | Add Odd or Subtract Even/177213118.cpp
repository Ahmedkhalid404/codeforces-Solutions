#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(void) {
    long long size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            if( (b-a) % 2 == 1 )
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else if(a == b)
            cout<<0<<endl;
        else
        {
           if( (a-b) % 2 == 0 )
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}