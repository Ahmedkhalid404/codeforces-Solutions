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
        ll n ; cin >> n;
        if( n < 4 )
        {
            cout<<-1<<'\n';
            continue;
        }
        if( n == 4 )
        {
            cout<<"3 1 4 2"<<'\n';
            continue;
        }
        for (int i = ( (n & 1) ? n-1 : n ); i >= 2; i -= 2) {
            cout<<i<<" ";
        }
        cout<<"5 1 3 ";
        for (int i = 7; i <= n; i += 2) {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}