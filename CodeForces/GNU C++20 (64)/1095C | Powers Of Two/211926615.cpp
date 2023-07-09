#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n , k;
    cin >> n >> k;
    if( k == 1 )
    {
        ll p = log2( n );
        if( (ll)pow( 2 , p ) == n )
            return cout<<"YES\n"<<n,0;
        else
            return cout<<"NO",0;
    }
    if( k > n )
        return cout<<"NO",0;
    vector< ll >powersOfTwo = {n};
    ll idx = 0;
    ll count = n;
    while( true )
    {
        ll size = powersOfTwo.size();
        if( count == k )
        {
            cout<<"YES\n";
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < powersOfTwo[i]; ++j) {
                    cout<<(ll)pow( 2 , i )<<' ';
                }
            }
            return 0;
        }
        if( powersOfTwo[ idx ] < 2 )
        {
            if( idx == powersOfTwo.size() - 1 )
                return cout<<"NO",0;
            idx++;
        }
        else
        {
            if( idx == powersOfTwo.size() - 1  )
            {
                powersOfTwo.push_back( 0 );
            }
            if( !powersOfTwo[idx] )
            {
                idx++;
                if( idx >= size )
                {
                    return cout<<"NO",0;
                }
            }
            else
            {
                ----powersOfTwo[ idx ];
                powersOfTwo[idx+1]++;
                count--;
            }
 
        }
    }
    return 0;
}