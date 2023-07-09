#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    string Timur = "Timur";
    sort( Timur.begin() , Timur.end() );
    while( tt-- )
    {
        ll size;  cin >> size;
        string s; cin >> s;
        if( size != 5 )
        {
            cout<<"NO"<<'\n';
            continue;
        }
        sort( s.begin() , s.end() );
 
        cout<< ( s == Timur ? "YES\n" : "NO\n" );
    }
    return 0;
}