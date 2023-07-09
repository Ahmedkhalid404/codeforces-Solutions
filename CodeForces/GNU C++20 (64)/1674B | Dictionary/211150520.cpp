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
        string s;
        cin >> s;
        ll ans = ( (ll)(s[0] - 'a') * 25 ) + (ll)(s[1] - 'a');
        if( s[1] < s[0] )
            ans++;
        cout<<ans<<'\n';
    }
    return 0;
}