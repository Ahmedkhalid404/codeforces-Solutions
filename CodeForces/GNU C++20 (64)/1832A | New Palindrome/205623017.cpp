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
        string s;
        cin >> s;
        map< char , ll >freq;
        ll sz= s.size();
        for (int i = 0; i < sz; ++i) {
            freq[ s[i] ]++;
        }
        if( freq.size() == 1 )
        {
            cout<<"NO"<<ln;
            continue;
        }
        if( freq.size() == 2 )
        {
            auto it = freq.begin();
            auto it2 = freq.end();
            it2--;
            if( it->second == 1 || it2->second == 1 )
            {
                cout<<"NO"<<ln;
                continue;
            }
            else
            {
                cout<<"YES"<<ln;
                continue;
            }
        }
        cout<<"YES"<<ln;
    }
    return 0;
}