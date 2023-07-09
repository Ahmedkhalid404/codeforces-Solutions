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
        string s,t;
        cin >> s >> t;
        if( s.size() == t.size() )
        {
            if( s == t )
            {
                cout<<s<<'\n';
                continue;
            }
            cout<<-1<<'\n';
            continue;
        }
        ll lc = lcm( s.size() , t.size() );
        string tempS = s;
        string tempT = t;
        while( s.size() < lc || t.size() < lc )
        {
            if( s.size() < lc )
            {
                s += tempS;
            }
            if( t.size() < lc )
            {
                t += tempT;
            }
        }
        if( s == t )
            cout<<s<<'\n';
        else
            cout<<-1<<'\n';
    }
    return 0;
}