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
        ll a , b , c;
        cin >> a >> b >> c;
        ll dfb = ( (ll)abs( c - b ) ) + c;
        if( a > dfb )
        {
            cout<<2<<'\n';
            continue;
        }
        if( a < dfb )
        {
            cout<<1<<'\n';
            continue;
        }
        cout<<3<<'\n';
    }
    return 0;
}