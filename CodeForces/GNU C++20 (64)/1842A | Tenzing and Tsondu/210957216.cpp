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
        ll n , m;
        cin >> n >> m;
        vector< ll >tso( n ) , tenz( m );
        for (int i = 0; i < n; ++i) {
            cin >> tso[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> tenz[i];
        }
        ll i = 0;
        ll j = 0;
        while( ( i < n ) && ( j < m ) )
        {
            if( tso[i] > tenz[j] )
            {
                tso[i] -= tenz[j];
                j++;
            }
            else if( tso[i] < tenz[j] )
            {
                tenz[j] -= tso[i];
                i++;
            }
            else
            {
                i++;
                j++;
            }
        }
        //cout<<i<<' '<<j<<'\n';
        if( i < n )
        {
            cout<<"Tsondu\n";
            continue;
        }
        if( j < m )
        {
            cout<<"Tenzing\n";
            continue;
        }
        cout<<"Draw\n";
    }
    return 0;
}