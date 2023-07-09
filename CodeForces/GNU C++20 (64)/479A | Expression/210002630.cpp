#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll a,b,c;
    cin >> a >> b >> c;
    cout<<(ll)max( { a + b * c , a * (  b + c ) , a * b * c , ( a + b ) * c , a + b + c , (a + b)  * c , a * b + c  });
    return 0;
}