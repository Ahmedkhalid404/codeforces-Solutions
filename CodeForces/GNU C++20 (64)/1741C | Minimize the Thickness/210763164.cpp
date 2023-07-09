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
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        ll sum = 0;
        ll res = LLONG_MAX;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
            ll sum2 = 0;
            ll idx = i + 1;
            ll mn  = i + 1;
            bool flag = true;
            for (int j = i + 1; j < size; ++j) {
                sum2 += numbers[j];
                if( sum2 == sum )
                {
                    mn = (ll)max( mn , j - idx + 1 );
                    sum2 = 0;
                    flag = true;
                    idx = j + 1;
                }
                else
                    flag = false;
            }
            if( flag )
            {
                res = (ll)min( res , mn );
            }
        }
        cout<<(ll)min( res , size )<<'\n';
    }
    return 0;
}