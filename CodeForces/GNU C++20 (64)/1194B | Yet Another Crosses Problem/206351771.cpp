#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('♡');
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll n , m ;
        cin >> n >> m;
        vector< vector< char > >grid( n,vector< char >(m) );
        map< ll , ll >freq,freqCoul;
        for (int i = 0; i < n; ++i) {
            ll cnt = 0;
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if( grid[i][j] == '.' )
                    cnt++;
            }
            freq[ i ] = cnt;
        }
        for (int i = 0; i < m; ++i) {
            ll cnt = 0;
            for (int j = 0; j < n; ++j) {
                if( grid[j][i] == '.' )
                    cnt++;
            }
            freqCoul[ i ] = cnt;
        }
        ll res = 100000000000000;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                ll cnt = freq[i] + freqCoul[ j ];
                if( grid[i][j] == '.' )
                    cnt--;
                if( cnt < res )
                    res = cnt;
            }
        }
        cout<<res<<ln;
    }
    return 0;
}