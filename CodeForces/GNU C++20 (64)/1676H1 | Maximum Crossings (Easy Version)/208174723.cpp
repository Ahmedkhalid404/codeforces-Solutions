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
        multiset<ll>st;
        ll x;
        cin >> x;
        st.insert( x );
        ll ans = 0;
        for (int i = 1; i < size; ++i) {
            cin >> x;
            vector< ll >numbers( st.begin() , st.end() );
            ans = ans + ( i -  (lower_bound( numbers.begin() , numbers.end() , x ) - numbers.begin() )   );
            st.insert( x );
        }
        cout<<ans<<"\n";
    }
    return 0;
}