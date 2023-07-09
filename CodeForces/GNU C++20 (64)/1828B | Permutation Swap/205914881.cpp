#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll size;
        cin >> size;
        vector< ll > results;
        for (int i = 1; i <= size; ++i) {
            ll x;
            cin >> x;
            if( i != x )
            {
                results.push_back( abs( x - i ) );
            }
        }
        if( !results.size() )
        {
            cout<<0<<ln;
            continue;
        }
        sort(results.begin() , results.end());
        ll sz = results.size();
        ll res = -1;
        for (int i = results.front(); i > 1; --i) {
            for (int j = 0; j < sz; ++j) {
                if( results[j] % i )
                    break;
                if( j == sz - 1 )
                {
                    res = i;
                    goto jump;
                }
            }
        }
        cout<<1<<ln;
        continue;
        jump:;
        cout<<res<<ln;
 
    }
    return 0;
}