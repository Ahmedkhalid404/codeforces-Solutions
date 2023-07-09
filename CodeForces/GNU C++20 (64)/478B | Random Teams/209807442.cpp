#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector< vector< ll > >graph;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n , m;
    cin >> n >> m;
    if( m == 1 )
        return cout<< ( n * ( n - 1 ) / 2 ) << " " << ( n * ( n - 1 ) / 2 ) ,0;
    if( m == n )
        return cout<<0<<" "<<0,0;
    ll mx = n - (m - 1);
    mx = mx * ( mx - 1 ) / 2;
    ll mn = n / m;
    ll rem = n % m;
    ll numbers = m - rem;
    numbers = ( mn * ( mn - 1 ) / 2 ) * numbers;
    mn++;
    numbers += ( mn * ( mn - 1 ) / 2 ) * rem;
    cout<<numbers<<" "<<mx;
    return 0;
}