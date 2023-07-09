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
        ll res = 0;
        while( size-- )
        {
            ll a,b;
            cin >> a >> b;
            res = res + ( a > b );
        }
        cout<<res<<'\n';
    }
    return 0;
}