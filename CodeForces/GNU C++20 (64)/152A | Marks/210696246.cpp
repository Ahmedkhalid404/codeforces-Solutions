#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,m;
    cin >> n >> m;
    ll arr[n][m];
    vector< ll >mx ( m);
    for (int i = 0; i < n; ++i) {
            string num ;
            cin >> num;
            ll sz = num.size();
        for (int j = 0; j < sz; ++j) {
            arr[i][j] = num[j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mx[ i ] = (ll)max( mx[i] , arr[j][i] );
        }
    }
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if( ( arr[i][j] == mx[j] ) )
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}