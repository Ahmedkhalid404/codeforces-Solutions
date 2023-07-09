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
        ll a , b , x , y , n;
        cin >> a >> b >> x >> y >> n;
        ll tempa = a , tempb = b , tempx = x, tempn = n;
        ll mn = LLONG_MAX;
        ll diff = a - x;
        if( n >= diff )
        {
            a -= diff;
            n -= diff;
        }
        else
        {
            a -= n;
            n = 0;
        }
        diff = b - y;
        if( n >= diff )
        {
            b -= diff;
            n -= diff;
        }
        else
        {
            b -= n;
            n = 0;
        }
        mn = a*b;
        a = tempa ;
        b = tempb ;
        x = tempx ;
        n = tempn ;
        diff = b - y;
        if( n >= diff )
        {
            b -= diff;
            n -= diff;
        }
        else
        {
            b -= n;
            n = 0;
        }
        diff = a - x;
        if( n >= diff )
        {
            a -= diff;
            n -= diff;
        }
        else
        {
            a -= n;
            n = 0;
        }
        mn = (ll)min( mn , a * b );
        cout<<mn<<'\n';
    }
    return 0;
}