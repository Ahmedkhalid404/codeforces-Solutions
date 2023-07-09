#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size , m;
    cin >> size >> m;
    ll sum = 0;
    vector< ll >prefixDiff( size );
    for (int i = 0; i < size; ++i) {
        ll a , b;
        cin >> a >> b;
        sum += a;
        prefixDiff[ i ] = ( a - b );
    }
    sort( prefixDiff.begin() , prefixDiff.end() , [](ll x,ll y){
        return x > y;
    } );
    for (int i = 1; i < size; ++i) {
        prefixDiff[i] = prefixDiff[i - 1] + prefixDiff[ i ];
    }
    if( sum <= m )
        return cout<<0,0;
    ll st = 0;
    ll ed = size - 1;
    ll md , ans = -1;
    while( st <= ed )
    {
        md = (st + ed) / 2;
        if( sum - prefixDiff[ md ] <= m )
        {
            ans = md;
            ed = md - 1;
        }
        else
            st = md + 1;
    }
    if( ~ans )
        return cout<<ans + 1,0;
    cout<<-1;
    return 0;
}