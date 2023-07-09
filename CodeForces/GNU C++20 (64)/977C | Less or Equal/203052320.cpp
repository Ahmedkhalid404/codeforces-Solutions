#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll size , k;
    cin >> size >> k;
    vector< ll >numbers( size );
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    sort( numbers.begin() , numbers.end() );
    if( !k )
    {
        if( numbers.front() == 1 )
            return void(cout<<-1);
        else
            return void(cout<<1);
    }
    if( k == size )
        return void(cout<<numbers[size - 1]);
    k--;
    if( numbers[ k ] != numbers[ k + 1 ] )
        return void(cout<<numbers[k]);
    cout<<-1;
 
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