#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll size , k; cin >> size >> k;
    string s; cin >> s;
    map< char , ll >freq , willDelete;
    for (int i = 0; i < size; ++i) {
        freq[ s[i] ]++;
    }
    for(auto it : freq)
    {
        if( !k )
            break;
        ll mn = (ll)min( it.second , k );
        willDelete[ it.first ] = mn;
        k -= mn;
        it.second -= mn;
    }
    for (int i = 0; i < size; ++i) {
        if( !willDelete[ s[i] ] )
        {
            cout<<s[i];
        }
        else
            willDelete[ s[i] ]--;
    }
 
    return 0;
}