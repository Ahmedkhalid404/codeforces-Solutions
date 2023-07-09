#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector< vector< ll > >graph;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size;
        cin >> size;
        size *= 2;
        vector< ll >numbers;
        unordered_set< ll >st;
        for (int i = 0; i < size; ++i) {
            ll x;
            cin >> x;
            bool flag = true;
            if( st.size() )
            {
                if( st.count( x ) )
                    flag = false;
            }
            if( flag )
            {
                numbers.push_back( x );
                st.insert( x );
            }
        }
        for(ll it : numbers) cout<<it<<" ";
        cout<<'\n';
    }
    return 0;
}