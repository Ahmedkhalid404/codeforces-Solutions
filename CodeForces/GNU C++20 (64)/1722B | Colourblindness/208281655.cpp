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
        ll size;
        cin >> size;
        string s,t;
        cin >> s >> t;
        for (int i = 0; i < size; ++i) {
            if( s[i] == 'G' )
                s[i] = 'B';
            if( t[i] == 'G' )
                t[i] = 'B';
        }
        cout<<( s == t ? "YES\n" : "NO\n");
    }
    return 0;
}