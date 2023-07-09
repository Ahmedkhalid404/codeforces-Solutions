#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll rooms , q;
    cin >> rooms >> q;
    vector< ll >prefix( rooms + 1 );
    for (int i = 1; i <= rooms; ++i) {
        ll room; cin >> room;
        prefix[ i ] = prefix[i - 1] + room;
    }
    while( q-- )
    {
        ll room; cin >> room;
        ll st = 1;
        ll ed = rooms;
        ll md , ans = -1;
        while( st <= ed )
        {
            md = (st + ed) / 2;
            if( prefix[ md ] >= room )
            {
                ans = md;
                ed = md - 1;
            }
            else
            {
                st = md + 1;
            }
        }
        cout<<ans<<" "<<room - prefix[ ans - 1 ]<<ln;
    }
    return 0;
}