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
        ll size , W;
        cin >> size >> W;
        ll res = 1;
        ll mx = -1;
        map<ll,ll>freq;
        for (int i = 0; i < size; ++i) {
            ll w;
            cin >> w;
            mx = (ll)max( mx , w );
            freq[ w ]++;
        }
        ll sum = 0;
        ll curr = mx;
        while( !freq.empty() )
        {
            //cout<<curr<<" "<<freq.size()<<'\n';
            if( freq.find( curr ) == freq.end() )
            {
                if( curr == 1 )
                {
                    sum = 0;
                    res++;
                    curr = mx;
                }
                else
                    curr /= 2;
            }
            else
            {
                if( (sum + curr) <= W )
                {
                    sum += curr;
                    freq[ curr ]--;
                    if( freq[ curr ] < 1 )
                    {
                        freq.erase( curr );
                        if( curr == 1 )
                            curr = mx;
                        else
                            curr /= 2;
                    }
                }
                else if( curr == 1 )
                {
                    sum = 0;
                    res++;
                    curr = mx;
                }else
                {
                    curr /= 2;
                }
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}