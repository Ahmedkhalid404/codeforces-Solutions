#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll size , time ;
    cin >> size >> time;
    ll t[ size ] , fun[ size ];
    for (int i = 0; i < size; ++i) {
        cin >> t[i];
    }
    for (int i = 0; i < size; ++i) {
        cin >> fun[i];
    }
    pair<ll,ll> mx = {-1,-1};
    for (int i = 0; i < size; ++i) {
        if( !time )
            break;
        if( time >= t[i] ) {
            if( mx.first < fun[i] )
            {
                mx.first = fun[i];
                mx.second = i+1;
            }
        }
        time --;
    }
    cout<<mx.second;
}
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cout<< fixed <<showpoint <<setprecision(7);
#ifndef ONLINE_JUDGE
    freopen ("outputFile.txt","w",stdout);
    freopen ("inputFile.txt","r",stdin);
#endif
    ll tt = 1;
    cin >> tt;
    while(tt--)
    {
        There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not();
        cout<<ln;
    }
    return 0;
}