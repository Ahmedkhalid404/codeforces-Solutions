#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('♡');
    ll tt;
    cin >> tt;
    while( tt-- ){
        string s,t,p;
        cin >> s >> t >> p;
        ll j = 0;
        ll szT = t.size();
        ll szS = s.size();
        ll szP = p.size();
        for (int i = 0; i < szT; ++i) {
            if( t[i] == s[j] )
            {
                j++;
                if( j == szS )
                    break;
            }
        }
        map< char , ll >freqT;
        if( j != szS )
        {
            cout<<"NO"<<ln;
            goto jump;
        }
        for (int i = 0; i < szT; ++i) {
            freqT[ t[i] ]++;
        }
        for (int i = 0; i < szS; ++i) {
            freqT[ s[i] ]--;
        }
        for (int i = 0; i < szP; ++i) {
            if( freqT[ p[i] ] > 0 )
                freqT[ p[i] ] --;
        }
        for(auto it : freqT)
            if( it.second > 0 )
            {
                cout<<"NO"<<ln;
                goto jump;
            }
        cout<<"YES"<<ln;
        jump:;
    }
    return 0;
}