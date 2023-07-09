#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size , q;
    cin >> size >> q;
    map< ll , ll >freq;
    for (int i = 1; i <= size; ++i) {
        ll x ;
        cin >> x;
        if( !freq[ x ] )
            freq[ x ] = i;
    }
    while( q-- )
    {
        ll x;
        cin >> x;
        cout<<freq[ x ]<<" ";
        if( freq[ x ] == 1 )
            continue;
        for(auto &it : freq)
        {
            if( it.second < freq[x] )
                it.second++;
        }
        freq[ x ] = 1;
    }
    return 0;
}