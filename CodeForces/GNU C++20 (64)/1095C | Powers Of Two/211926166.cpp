#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n , k;
    cin >> n >> k;
    if( k > n )
        return cout<<"NO",0;
    vector< ll >powersOfTwo = {n};
    ll idx = 0;
    while( true )
    {
        ll size = powersOfTwo.size();
        ll count = 0;
        for (int i = 0; i < size; ++i) {
            count += powersOfTwo[i];
        }
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
            }
 
        }
    }
    return 0;
}