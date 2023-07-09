#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
double dist(pair< ll , ll >a , pair< ll , ll > b ){
    return sqrt( pow( a.first - b.first , 2 ) + pow( a.second - b.second , 2 ) );
}
 
int main() {
    HelloWorld('-');
    ll n , m , x;
    cin >> n >> m >> x;
    char arr[ n ][ m ];
    map< char , pair< bool , vector< pair<ll,ll> > > >  idx;
    map< char , pair< bool , ll > >isTake;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            idx[ arr[i][j] ].first         = true;
            idx[ arr[i][j] ].second.push_back( { i , j } );
        }
    }
    ll q;
    cin >> q;
    ll ans = 0;
    while( q-- )
    {
        char ch , low;
        cin >> ch;
        low = ch;
        low = tolower( low );
        if( low == ch ) {
            if( !idx[ low ].first )
                return cout<<-1,0;
            goto jump;
        }
        if( !idx[ 'S' ].first )
            return cout<<-1,0;
        if( !idx[ low ].first )
            return cout<<-1,0;
        if( isTake[ ch ].first )
        {
            //cout<<ch<<ln;
            ans = ans + isTake[ ch ].second;
        }
        else
        {
            //cout<<low<<" "<<ch<<ln;
            ll sz = idx[ low ].second.size();
            bool flag = false;
            for (int i = 0; i < sz; ++i) {
                ll szS = idx[ 'S' ].second.size();
                flag = false;
                for (int j = 0; j < szS; ++j) {
                    double d = dist( idx[ low ].second[ i ] , idx[ 'S' ].second[j] );
                    if( d <= (double)x )
                    {
                        flag = true;
                        break;
                    }
                }
                if( flag )
                    break;
            }
            isTake[ ch ].first = true;
            if( !flag )
            {
                ans ++;
                isTake[ ch ].second = 1;
            }
            else
                isTake[ ch ].second = 0;
        }
 
        jump:;
    }
    cout<<ans;
    return 0;
}