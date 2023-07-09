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
        ll size;
        cin >> size;
        ll pos = 0,neg = 0;
        for (int i = 0; i < size; ++i) {
            ll num;
            cin >> num;
            if( num > 0 )
                pos++;
            else
                neg++;
        }
        ll ans = 0;
        while( pos < neg )
        {
            pos++;
            neg--;
            ans++;
        }
        while( neg & 1 )
        {
            neg--;
            pos++;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}