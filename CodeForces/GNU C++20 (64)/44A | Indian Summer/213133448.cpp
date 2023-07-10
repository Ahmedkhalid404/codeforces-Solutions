#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    set< pair< string , string > >leaves;
    while( size-- )
    {
        string _ , $;
        cin >> _ >> $;
        leaves.insert( { _ , $ } );
    }
    cout<<leaves.size();
    return 0;
}