#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    string codeforces = "codeforces";
    while( tt-- )
    {
        string s;
        cin >> s;
        ll ans = 0;
        ll size = s.size();
        for (int i = 0; i < size; ++i) {
            if( s[i] != codeforces[i] ) ans++;
        }
        cout<<ans<<ln;
    }
    return 0;
}