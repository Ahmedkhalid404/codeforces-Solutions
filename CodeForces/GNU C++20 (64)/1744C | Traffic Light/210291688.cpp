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
        ll size ;
        char ch;
        cin >> size >> ch;
        string s;
        cin >> s;
        size *= 2;
        ll l = 0;
        s += s;
        ll mx = 0;
        for (int i = size - 1; i > -1; --i) {
            if( s[i] == 'g' )
            {
                l = i;
            }
            if( s[i] == ch )
                mx = (ll)max( mx , l - i );
        }
        cout<<mx<<'\n';
    }
    return 0;
}