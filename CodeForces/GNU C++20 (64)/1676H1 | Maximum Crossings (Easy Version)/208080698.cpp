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
        ll size , ans = 0;
        cin >> size;
        vector<ll>numbers( size );
        cin >> numbers.front();
        for (int i = 1; i < size; ++i) {
            cin >> numbers[i];
            int j = i;
            for (; j > 0; --j) {
                if( numbers[j] > numbers[j - 1] )
                {
                    break;
                }
                swap( numbers[j] , numbers[j - 1] );
            }
            ans = ans + ( i - j );
        }
        cout<<ans<<'\n';
    }
    return 0;
}