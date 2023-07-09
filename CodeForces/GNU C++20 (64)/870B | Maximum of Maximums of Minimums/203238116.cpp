#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll size , k;
    cin >> size >> k;
    ll numbers[ size ];
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    if( k == 1 )
        return void(cout<<*min_element(numbers , numbers + size));
    if( k == 2 )
    {
        ll prefix[ size ] , suffix [ size ];
        ll mn = 100000000000;
        for (int i = 0; i < size; ++i) {
            mn = (ll)min(mn , numbers[i]);
            prefix[ i ] = mn;
        }
        mn = 100000000000;
        for (int i = size - 1; i > -1; --i) {
            mn = (ll)min(mn , numbers[i]);
            suffix[i] = mn;
        }
        ll mx = -10000000000000;
        for (int i = 1; i < size; ++i) {
            mx = (ll)max( mx , max( prefix[i - 1] , suffix[i] ) );
        }
        return void(cout<<mx);
    }
    cout<<*max_element(numbers,numbers + size);
}
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cout<< fixed <<showpoint <<setprecision(7);
#ifndef ONLINE_JUDGE
    freopen ("outputFile.txt","w",stdout);
    freopen ("inputFile.txt","r",stdin);
#endif
    ll tt = 1;
    //cin >> tt;
    while(tt--)
    {
        There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not();
        cout<<ln;
    }
    return 0;
}