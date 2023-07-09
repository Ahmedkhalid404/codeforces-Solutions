#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll n;
        cin >> n;
        ll sum = ( n * ( n + 1 ) / 2 ) - 1;
        ll st = 2;
        ll ed = 300;
        ll md, ans = -1;
        while( st <= ed )
        {
            md = (st + ed) / 2;
            if( md * n >= sum )
            {
                ans = md;
                ed = md - 1;
            }
            else
                st = md + 1;
        }
        cout<<( ans * n ) - sum<<" ";
        for (int i = 2; i <= n; ++i) {
            cout<<i<<" ";
        }
        cout<<ln;
    }
    return 0;
}