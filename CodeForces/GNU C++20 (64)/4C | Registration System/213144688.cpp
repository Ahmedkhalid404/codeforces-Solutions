#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    map< string , pair< bool , ll > >database;
    while( size-- )
    {
        string s;
        cin >> s;
        if( !database[ s ].first )
        {
            database[ s ].first = true;
            database[ s ].second++;
            cout<<"OK\n";
        }
        else
        {
            string newName = s + to_string( database[s].second );
            cout<<newName<<'\n';
            database[ s ].second ++;
            database[ newName ].first = true;
            database[ newName ].second++;
        }
    }
    return 0;
}