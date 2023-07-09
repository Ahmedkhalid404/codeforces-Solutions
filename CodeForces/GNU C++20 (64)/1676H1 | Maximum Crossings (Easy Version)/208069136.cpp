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
        ll size , ans = 0;
        cin >> size;
        vector<ll>numbers;
        for (int i = 0; i < size; ++i) {
            ll x ;
            cin >> x;
            if( i )
            {
                sort( numbers.begin() , numbers.end() );
                ans = ans + ( numbers.size() -  (lower_bound( numbers.begin() , numbers.end() , x ) - numbers.begin() )   );
                numbers.push_back( x );
            }
            else
            {
                numbers.push_back(x);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}