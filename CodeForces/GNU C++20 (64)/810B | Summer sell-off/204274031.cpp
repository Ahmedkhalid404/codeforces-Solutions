#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll days , mulBy2;
    cin >> days >> mulBy2;
    vector< pair< pair< ll , ll > , pair< ll , ll > >  >day( days );
    for (int i = 0; i < days; ++i) {
        cin >> day[i].first.first >> day[i].first.second;
        day[i].second.first  = (ll)min( day[i].first.first , day[i].first.second );
        day[i].second.second = (ll)min( day[i].first.first * 2 , day[i].first.second ) - day[i].second.first;
    }
    sort( day.begin() , day.end() , [](pair< pair< ll , ll > , pair< ll , ll > > x,pair< pair< ll , ll > , pair< ll , ll > > y){
        return x.second.second > y.second.second;
    } );
    ll res = 0;
    for (int i = 0; i < days; ++i) {
        if( i <= ( mulBy2 - 1 ) )
        {
            res = res +  day[i].second.first + day[i].second.second;
        }
        else
        {
            res = res + day[i].second.first;
        }
    }
    cout<<res;
    return 0;
}