#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size ;
    cin >> size;
    ll mn = INFINITY;
    ll mx = -1;
    for (int i = 0; i < size; ++i) {
        ll x;
        cin >> x;
        mn = (ll)min( mn , x );
        mx = (ll)max( mx , x );
    }
    cout<<( mx - mn + 1 ) - size ;
    return 0;
}