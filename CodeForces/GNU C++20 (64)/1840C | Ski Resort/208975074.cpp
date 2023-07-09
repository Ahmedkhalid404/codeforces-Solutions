#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n , k , q;
vector<ll>Numbers;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        cin >> n >> k >> q;
        Numbers.resize( n );
        for (int i = 0; i < n; ++i) {
            cin >> Numbers[i];
        }
        ll ans = 0;
        ll cnt = 0;
        ll i = 0;
        while( i < n )
        {
            if( Numbers[i] > q )
                {
                    cnt = 0;
                }
                else
                {
                    cnt++;
                    ans = ans + (ll)max( 0LL,cnt - k + 1);
                }
            i++;
        }
        //ans = ans + (ll)max( 0LL,cnt - k + 1);
        cout<<ans<<'\n';
    }
    return 0;
}