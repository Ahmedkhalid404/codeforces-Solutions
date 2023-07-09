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
        ll a , b;
        cin >> a >> b;
        ll diff = (ll)abs(b - a);
        ll k = 10;
        ll ans = 0;
        while( diff > 0 )
        {
            ll div = diff / k;
            diff = diff - ( div * k );
            ans += div;
            k--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}