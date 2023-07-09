#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector< vector< ll > >graph;
 
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
        ll st = 0;
        ll ed = size - 1;
        ll md , ans = -1;
        auto isValid = [&](ll md){
            ll i = md , j = size - 1;
            if( j - i + 1 == 1 ) return true;
            ll curr = -1;
            while( i < j )
            {
                if( numbers[i] < curr || numbers[j] < curr )
                    return false;
                if( numbers[i] <= numbers[j] )
                {
                    curr = numbers[i];
                    i++;
                }
                else if( numbers[j] <= numbers[i] )
                {
                    curr = numbers[j];
                    j--;
                }
            }
            return true;
        };
        while( st <= ed )
        {
            md = ( st + ed ) / 2;
            if( isValid( md ) )
            {
                ans = md;
                ed = md - 1;
            }
            else
            {
                st = md + 1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}