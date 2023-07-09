#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll x , y;
        cin >> x >> y;
        if( y < x )
        {
            cout<<0<<' '<<0<<'\n';
            continue;
        }
        if( !(y % x) )
            cout<<1<<' '<<y/x<<'\n';
        else
            cout<<0<<' '<<0<<'\n';
    }
    return 0;
}