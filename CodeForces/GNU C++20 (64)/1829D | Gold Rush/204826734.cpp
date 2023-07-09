#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
bool flag = false;
void solve(ll n , ll m)
{
    if( m > n )
        return;
    if( m == n )
    {
        flag = true;
        return;
    }
    if( m % 2 == 0 )
    {
        solve (n , m + (m / 2) );
    }
    solve( n , m + (m * 2)  );
}
 
int main() {
    HelloWorld('-');
 
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll n , m;
        cin >> n >> m;
        flag = false;
        solve( n , m );
        if( flag )
            cout<<"YES"<<ln;
        else
            cout<<"NO"<<ln;
    }
 
    return 0;
}