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
        ll x , y , z;
        cin >> x >> y >> z;
        set<ll>numbers = {x,y,z};
        if( numbers.size() == 3 )
        {
            cout<<"NO"<<'\n';
            continue;
        }
        if( numbers.size() == 1 )
        {
            cout<<"YES\n"<<x<<" "<<y<<" "<<z<<'\n';
            continue;
        }
        if( x == y )
        {
            if( x > z )
            {
                cout<<"YES\n"<<x<<" "<<z<<" "<<z<<'\n';
            }
            else
            {
                cout<<"NO\n";
            }
            continue;
        }
        if( x == z )
        {
            if( x > y )
            {
                cout<<"YES\n"<<y<<" "<<y<<" "<<z<<'\n';
            }
            else
            {
                cout<<"NO\n";
            }
            continue;
        }
        if( y == z )
        {
            if( x < y )
            {
                cout<<"YES\n"<<x<<" "<<x<<" "<<y<<'\n';
            }
            else
            {
                cout<<"NO\n";
            }
            continue;
        }
 
    }
    return 0;
}