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
        if( size == 1 )
        {
            cout<<numbers.front()<<'\n';
            continue;
        }
        sort( numbers.begin() , numbers.end() );
        ll mx = numbers.back() - numbers[ size - 2 ];
        ll mn = mx;
        for (int i = size - 2; i > 0; i--) {
            mn = (ll)max( mn , numbers[i] - numbers[i - 1] );
            mx = (ll)max( mn , mx );
        }
        cout<<(ll)max( mx , numbers.front() )<<'\n';
    }
    return 0;
}