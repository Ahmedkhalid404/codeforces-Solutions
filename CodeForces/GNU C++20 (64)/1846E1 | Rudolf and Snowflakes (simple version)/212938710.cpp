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
        ll k = 2;
        while( true )
        {
            ll res = ( ( (k * k) + k ) + 1) ;
            ll curr = k * k;
            while( res < n )
            {
                res = res + ( curr * k );
                curr = curr * k;
            }
            if( !(res ^ n) )
            {
                cout<<"YES\n";
                goto finishTestCase;
            }
            res = ( ( (k * k) + k ) + 1) ;
            if( res > n )
            {
                cout<<"NO\n";
                goto finishTestCase;
            }
            k++;
        }
        finishTestCase:;
    }
    return 0;
}