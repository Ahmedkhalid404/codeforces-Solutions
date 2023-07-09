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
        ll n , k;
        cin >> n >> k;
        cout<<(ll)min( n + 1 , (k > 35 ? n+1 : (ll)pow( 2 , k ))  )<<'\n';
    }
    return 0;
}