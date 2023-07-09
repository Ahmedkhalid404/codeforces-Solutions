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
        ll size ; cin >> size;
        string s ; cin >> s;
        if( count( s.begin() , s.end() , '0' ) > 1 || count( s.begin() , s.end() , '1' ) > 1 )
            cout<<"NO"<<ln;
        else
            cout<<"YES"<<ln;
    }
    return 0;
}