#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
struct ingredients{
    ll B = 0;
    ll S = 0;
    ll C = 0;
};
 
int main() {
    HelloWorld('-');
    string hamburgers;
    ingredients price , have , oneHamburgersNeed;
    ll money;
    cin >> hamburgers;
    cin >> have.B  >> have.S  >> have.C  ;
    cin >> price.B >> price.S >> price.C ;
    cin >> money;
    ll sz = hamburgers.size();
    for (int i = 0; i < sz; ++i) {
        if( hamburgers[i] == 'B' )
        {
            oneHamburgersNeed.B++;
        }
        else if( hamburgers[i] == 'S' )
        {
            oneHamburgersNeed.S++;
        }
        else
        {
            oneHamburgersNeed.C++;
        }
    }
    ll st = 1;
    ll ed = 1e13;
    ll md , ans = -1;
    auto valid  = [=](ll md,ll money)   {
        ll needB = oneHamburgersNeed.B * md;
        ll needS = oneHamburgersNeed.S * md;
        ll needC = oneHamburgersNeed.C * md;
        if( needB > have.B )
        {
            ll p = ( ( needB - have.B ) * price.B );
            if( money < p )
            {
                return false;
            }
            money -= p;
        }
        if( needS > have.S )
        {
            ll p = ( ( needS - have.S ) * price.S );
            if( money < p )
            {
                return false;
            }
            money -= p;
        }
        if( needC > have.C )
        {
            ll p = ( ( needC - have.C ) * price.C );
            if( money < p )
            {
                return false;
            }
            money -= p;
        }
        return  true;
    };
    while ( st <= ed )
    {
        md = ( st + ed ) / 2;
        if( valid( md , money) )
        {
            ans = md;
            st = md + 1;
        }
        else
        {
            ed = md - 1;
        }
    }
    if( ~ans )
        cout<<ans;
    else
        cout<<0;
    return 0;
}