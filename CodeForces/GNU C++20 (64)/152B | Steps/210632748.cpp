#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n , m;
pair< ll,ll >myPos , Move;
bool isValid(ll md)
{
    if( ( ( myPos.first + ( md * Move.first ) <= n ) && ( myPos.first + ( md * Move.first ) > 0 ) ) && ( ( myPos.second + ( md * Move.second ) <= m ) && ( myPos.second + ( md * Move.second )> 0 ) ) )
        return  true;
    return false;
}
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    cin >> myPos.first >> myPos.second;
    ll q;
    cin >> q;
    ll steps = 0;
    while( q-- )
    {
        cin >> Move.first >> Move.second;
        if( ( ( myPos.first + Move.first <= n ) && ( myPos.first + Move.first > 0 ) ) && ( ( myPos.second + Move.second <= m ) && ( myPos.second + Move.second > 0 ) ) )
        {
            ll st = 1;
            ll ed = 1e15;
            ll md , ans = -1;
            while( st <= ed )
            {
                md = ( st + ed ) / 2;
                if( isValid( md ) )
                {
                    ans = md;
                    st = md + 1;
                }
                else
                {
                    ed = md - 1;
                }
            }
            myPos.first = myPos.first + ( ans * Move.first );
            myPos.second = myPos.second + ( ans * Move.second );
            steps += ans;
        }
    }
    cout<<steps;
    return 0;
}