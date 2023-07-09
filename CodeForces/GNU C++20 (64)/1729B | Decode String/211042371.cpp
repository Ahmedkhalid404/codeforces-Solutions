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
        string s;
        ll size;
        cin >> size >> s;
        string res = "";
        for (int i = 0; i < size; ++i) {
            if( s[i] == '0' )
                continue;
            if( i + 2 < size )
            {
                if( s[i + 2] == '0' && ( (i + 3 >= size) || ((i + 3 < size) && (s[i + 3] != '0')) ) )
                {
                    ll num = ( s[i] - '0' ) * 10 + ( s[i + 1] - '0' );
                    res.push_back( char(num - 1 + 'a') );
                    i++;
                }
                else
                {
                    res .push_back( char((s[i] - '0') - 1 + 'a') );
                }
            }
            else
            {
                res .push_back( char((s[i] - '0') - 1 + 'a') );
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}