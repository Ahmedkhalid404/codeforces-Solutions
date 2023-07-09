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
        ll n , h , m;
        cin >> n >> h >> m;
        map< pair< ll , ll > , ll >freq;
        while( n-- )
        {
            ll m , h;
            cin >> h >> m;
            freq[ {h , m} ] = 1;
        }
        ll ans = 0;
        while( true )
        {
            if( freq[ { h,m } ] )
            {
                break;
            }
            m++;
            if( m == 60 )
            {
                h++;
                m = 0;
                if( h == 24 )
                    h = 0;
            }
            ans++;
        }
        cout<<ans / 60<<" "<<ans % 60<<'\n';
    }
    return 0;
}