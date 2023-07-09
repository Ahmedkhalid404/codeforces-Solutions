#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    string num;
    cin >> num;
    ll result = 1;
    if( num[0] == '0' )
        return void(cout<<0);
    if( num.size() == 1 )
    {
        if( num == "?" )
            return void(cout<<9);
        return void( cout<<1 );
    }
    for (int i = 0; i < num.size(); ++i) {
        if( num[i] == '?' )
        {
            if( !i )
                result *= 9;
            else
                result *= 10;
        }
    }
    cout<<result;
 
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