#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    ll size = s.size();
    if( size < 4 )
        return cout<<0,0;
    ll ans = 0;
    ll lastBear = 0;
    for (int i = 0; i < size; ++i) {
        if( s[i] == 'b' )
        {
            if( i + 3 < size )
            {
                if( s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r' )
                {
                    ans ++;
                    ans = ans + ( size -  (i + 4) );
                    if( i )
                    {
                        ans = ans + ( i - lastBear );
                        ans = ans + ( (i - lastBear) * ( size -  (i + 4) ) );
                    }
                    lastBear = i + 1;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}