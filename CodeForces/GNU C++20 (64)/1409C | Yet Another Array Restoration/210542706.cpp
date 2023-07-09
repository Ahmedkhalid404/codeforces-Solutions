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
        ll size , x , y;
        cin >> size >> x >> y;
        if( size == 2 )
        {
            cout<<x<<" "<<y<<'\n';
            continue;
        }
        if( y - x + 1 == size )
        {
            for (int i = x; i <= y; ++i) {
                cout<<i<<" ";
            }
            cout<<'\n';
            continue;
        }
        if( y - x + 1 < size )
        {
            ll cnt = 0;
            ll num {y};
            while( ( num > 0 ) && (cnt != size)  )
            {
                cout<<num<<" ";
                num--;
                cnt++;
            }
            num = y + 1;
            while( cnt != size )
            {
                cout<<num<<" ";
                num++;
                cnt++;
            }
            cout<<'\n';
            continue;
        }
        ll ans = -1;
        if( y - x == 1 )
        {
            ans = 1;
            goto jump;
        }
        for (int i = 2; i <= y * 2; ++i) {
            if( (!( ( y - x ) % i ) ) && ( ( y - (i * (size - 1) ) ) <= x  ) )
            {
                ans = i;
                break;
            }
        }
        //cout<<ans<<'\n';
        jump:;
        ll cnt = 0;
        ll num = y;
        while( num > 0 && ( cnt != size ) )
        {
            cout<<num<<" ";
            num -= ans;
            cnt++;
        }
        num = y + ans;
        while( cnt != size )
        {
            cout<<num<<" ";
            num += ans;
            cnt++;
        }
        cout<<'\n';
    }
    return 0;
}