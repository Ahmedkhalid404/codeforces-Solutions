#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll size;
    cin >> size;
    map< ll , ll >freq;
    ll mx = -1 , mn = INFINITY;
    for (int i = 0; i < size; ++i) {
        ll x;
        cin >> x;
        freq[x]++;
        mx = (ll)max(mx , x);
        mn = (ll)min(mn , x);
    }
    mx = mx - mn;
    if( freq.size() == 1 )
    {
        return  cout<<mx <<" "<<size * (size - 1) / 2,0;
    }
    ll cnt  = 0;
    for (auto it = freq.rbegin();it != freq.rend() ; it++) {
        for (auto jt = freq.begin(); jt->first != it->first ; jt++) {
            if( it->first - jt->first != mx)
            {
                if( jt == freq.begin() )
                    goto jump;
                break;
            }
            cnt = cnt + ( it->second * jt->second );
        }
    }
    jump:;
    cout << mx << " " << cnt;
    return 0;
}