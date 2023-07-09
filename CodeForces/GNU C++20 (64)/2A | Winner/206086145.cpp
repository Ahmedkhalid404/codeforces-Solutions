#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('♡');
    ll q;
    cin >> q;
    map< string , ll >freq;
    vector< pair<string , ll> >history(q);
    for (int i = 0; i < q; ++i) {
        string name ;
        ll score;
        cin >> name >> score;
        history[i] =  {name,score};
        freq[ name ] += score;
    }
    ll mx = -2000;
    for(auto it : freq)
        mx  =  (ll)max( mx , it.second );
    set< string>winners;
    for(auto it : freq)
    {
        if( it.second == mx )
        {
            winners.insert( it.first );
        }
    }
    map< string , ll >f;
    for (int i = 0; i < q; ++i) {
        f[ history[i].first ] += history[i].second;
        if( ( f[ history[i].first ] >= mx ) && ( winners.count( history[i].first ) ) )
            return cout<< history[i].first ,0;
    }
    return 0;
}