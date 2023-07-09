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
        ll sum = 0;
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
            sum = sum + (ll)abs( numbers[i] );
        }
        ll ans = 0;
        bool flag = false;
        for (int i = 0; i < size; ++i) {
            if( numbers[i] < 0 && !flag )
            {
                flag = true;
                ans ++;
            }
            if( numbers[i] > 0 && flag )
            {
                flag = false;
            }
        }
        cout<<sum << ' ' << ans <<'\n';
    }
    return 0;
}