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
        vector< ll >c(3);
        for (int i = 0; i < size; ++i) {
            ll num;
            cin >> num;
            c[ (num % 3) ]++;
        }
        ll all = size / 3;
        ll moves = 0;
        if( c[0] < all )
        {
            while( ( c[0] < all ) && ( c[2] > all ) )
            {
                moves++;
                c[0]++;
                c[2]--;
            }
            while( ( c[0] < all ) && ( c[1] > all ) )
            {
                ++++moves;
                c[0]++;
                c[1]--;
            }
        }
 
        if( c[1] < all )
        {
            while( ( c[1] < all ) && ( c[0] > all ) )
            {
                moves++;
                c[1]++;
                c[0]--;
            }
            while( ( c[1] < all ) && ( c[2] > all ) )
            {
                ++++moves;
                c[1]++;
                c[2]--;
            }
        }
 
        if( c[2] < all )
        {
            while( ( c[2] < all ) && ( c[0] > all ) )
            {
                ++++moves;
                c[2]++;
                c[0]--;
            }
            while( ( c[2] < all ) && ( c[1] > all ) )
            {
                ++moves;
                c[2]++;
                c[1]--;
            }
        }
        cout<<moves<<'\n';
    }
    return 0;
}