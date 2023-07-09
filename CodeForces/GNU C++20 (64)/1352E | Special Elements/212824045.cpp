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
        set<ll>sums;
        ll size ;
        cin >> size;
        vector<ll>numbres( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbres[i];
        }
        for (int i = 0; i < size; ++i) {
            ll sum = 0;
            for (int j = i; j < size; ++j) {
                sum += numbres[j];
                if( sum > size )
                    break;
                if( ( j - i ) >= 1 )
                    sums.insert( sum );
            }
        }
        ll res = 0;
        for (int i = 0; i < size; ++i) {
            if( sums.count( numbres[i] ) )
                res++;
        }
        cout<<res<<'\n';
    }
    return 0;
}