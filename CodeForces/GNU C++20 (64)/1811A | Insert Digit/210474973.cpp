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
        ll n , d;
        cin >> n >> d;
        string s;
        cin >> s;
        if( !d )
        {
            cout<<s<<d<<'\n';
            continue;
        }
        ll size = s.size();
        bool flag = false;
        for (int i = 0; i < size; ++i) {
            if(!flag && d > ( s[i] - '0' ) )
            {
                cout<<d;
                flag = true;
            }
            cout<<s[i];
        }
        if( !flag )
            cout<<d;
        cout<<'\n';
    }
    return 0;
}