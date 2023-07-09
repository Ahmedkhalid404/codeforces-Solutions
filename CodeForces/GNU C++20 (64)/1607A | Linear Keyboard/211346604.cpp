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
        string keyboard , word;
        cin >> keyboard >> word;
        ll size = (ll)word.size();
        map< char , ll >freq;
        for (int i = 0; i < 26; ++i) {
            freq[ keyboard[i] ] = i + 1;
        }
        ll ans = 0;
        for (int i = 0; i < size - 1; ++i) {
            ans = ans + (ll)abs( freq[ word[i] ] - freq[ word[ i + 1 ] ] );
        }
        cout<<ans<<'\n';
    }
    return 0;
}