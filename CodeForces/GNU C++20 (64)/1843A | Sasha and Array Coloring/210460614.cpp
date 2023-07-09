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
        vector<ll>numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        sort( numbers.begin() , numbers.end() );
        if( size < 4 )
        {
            if( size == 1 )
            {
                cout<<0<<'\n';
                continue;
            }
            if( size == 2 || size == 3 )
            {
                cout<<numbers.back()-numbers.front()<<'\n';
                continue;
            }
        }
        ll i = 0 , j = size - 1;
        ll ans = 0;
        while( i < j )
        {
            ans = ans + ( numbers[j] - numbers[i] );
            i++;
            j--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}