#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
enum game {Alice , Bop};
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size; cin >> size;
        vector< ll > candies( size );
        for (int i = 0; i < size; ++i) {
            cin >> candies[i];
        }
        ll alice = 0 , bop = 0 , moves = 0;
        ll idxAlice = 0 , idxBop = size - 1;
        ll currVal  = 0;
        game flag = Alice;
        while( idxAlice <= idxBop )
        {
            moves++;
            if( flag == Alice )
            {
                ll get = 0;
                for (int i = idxAlice; i <= idxBop; ++i) {
                    alice       += candies[i];
                    get         += candies[i];
                    candies[i]  = -1;
                    idxAlice++;
                    if( get > currVal )
                    {
                        currVal = get;
                        break;
                    }
                }
                flag = Bop;
            }
            else
            {
                ll get = 0;
                for (int i = idxBop; i >= idxAlice; --i) {
                    bop         += candies[i];
                    get         += candies[i];
                    candies[i]  = -1;
                    idxBop--;
                    if( get > currVal )
                    {
                        currVal = get;
                        break;
                    }
                }
                flag = Alice;
            }
        }
        cout<<moves<<" "<<alice<<" "<<bop<<'\n';
    }
    return 0;
}