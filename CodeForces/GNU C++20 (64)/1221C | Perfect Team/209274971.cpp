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
        ll c,m,x,mx , mn,mnn;
        cin >> c >> m >> x;
        if( !c || !m )
        {
            cout<<0<<'\n';
            continue;
        }
        ll ans = 0;
        mnn = (ll)min( {c , m , x} );
        ans += mnn;
        c -= mnn;
        m -= mnn;
        x -= mnn;
        if( !c || !m )
        {
            cout<<ans<<'\n';
            goto jump;
        }
        mx = (ll)max( c , m );
        mn = (ll)min( c , m );
        if( mx >= 2 * mn )
        {
            ans += mn;
            cout<<ans<<'\n';
            goto jump;
        }
        cout<<ans + ( ( mx + mn ) / 3 )<<'\n';
        jump:;
    }
    return 0;
}