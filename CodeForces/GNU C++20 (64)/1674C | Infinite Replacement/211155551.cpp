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
        string s , t;
        cin >> s >> t;
        if( t == "a" )
        {
            cout<<1<<'\n';
            continue;
        }
        if( ~t.find('a') )
        {
            cout<<-1<<'\n';
            continue;
        }
        cout<<(ll)pow( 2 , s.size() ) <<'\n';
    }
    return 0;
}