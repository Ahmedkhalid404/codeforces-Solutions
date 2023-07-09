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
        ll n;
        cin >> n;
        ll cube = (ll)cbrt( n );
        for (ll i = 1; i <= cube; ++i) {
            ll st = 1;
            ll ed = cube + 5;
            ll md;
            while( st <= ed )
            {
                md = (st + ed) / 2;
                if( ( ( md * md * md ) + ( i * i * i ) ) == n )
                {
                    cout<<"YES\n";
                    goto jump;
                }
                else if( ( ( md * md * md ) + ( i * i * i ) ) < n )
                {
                    st = md + 1;
                }
                else
                {
                    ed = md - 1;
                }
            }
        }
        cout<<"NO\n";
        jump:;
    }
    return 0;
}