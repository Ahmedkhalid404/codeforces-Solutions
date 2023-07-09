#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll size, x;
    cin >> size >> x;
    vector< ll >numbers(size);
    vector< ll > prefix( size ) , suffix( size );
    ll sum = 0;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
        prefix[i] = sum;
    }
    sum = 0;
    for (int i = size-1; i > -1; --i) {
        sum += numbers[i];
        suffix[i] = sum;
    }
    ll mx = -1;
    for (int i = 0; i < size; ++i) {
        if( suffix[i] % x )
            mx = (ll)max( mx , size - i );
    }
    for (int i = 0; i < size; ++i) {
        if( prefix[i] % x )
            mx = (ll)max( mx , i + 1LL );
    }
    cout<<mx;
 
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