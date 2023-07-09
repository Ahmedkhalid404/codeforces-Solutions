#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll size;
    cin >> size;
    vector< ll > orign( size ) , dash( size );
    for (int i = 0; i < size; ++i) {
        cin >> orign[i];
    }
    for (int i = 0; i < size; ++i) {
        cin >> dash[i];
    }
    pair< ll , ll > mx = {0,0};
    ll i = 0 ,  j = 0;
    bool flag = false;
    while( i < size && j < size - 1 )
    {
        if( dash[j] != orign[j] )
            flag = true;
        if( dash[ j ] > dash[ j + 1 ] )
        {
            if( flag && ( mx.second - mx.first + 1 ) < ( j - i + 1 ) )
            {
                mx.first  = i;
                mx.second = j;
            }
            i = j + 1;
            flag = false;
        }
        else if( j == size - 2 )
        {
            if( flag && ( mx.second - mx.first + 1 ) < ( (size - 1) - i + 1 ) )
            {
                mx.first  = i;
                mx.second = size - 1;
            }
            break;
        }
        //cout<<j<<ln;
        j++;
    }
    cout<<mx.first + 1<<" "<<mx.second + 1;
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
    while( tt-- )
    {
        There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not();
        cout<<ln;
    }
    return 0;
}