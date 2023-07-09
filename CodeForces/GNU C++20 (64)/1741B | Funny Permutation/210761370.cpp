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
        ll n;
        cin >> n;
        if( n == 3 )
        {
            cout<<-1<<'\n';
            continue;
        }
        cout<<n<<' '<<n-1<<' ';
        ----n;
        for (int i = 1; i <= n; ++i) {
            cout<<i<<' ';
        }
        cout<<'\n';
    }
    return 0;
}