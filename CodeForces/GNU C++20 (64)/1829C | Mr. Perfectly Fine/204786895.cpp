#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
bool comp(pair< ll , string > x,pair< ll , string > y)
{
    return x.first < y.first;
}
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    string codeforces = "codeforces";
    while( tt-- )
    {
        ll size;
        cin >> size;
        vector< pair< ll , string > >oneLByte,oneRByte,Twobyte;
        for (int i = 0; i < size; ++i) {
            ll x ;
            string s;
            cin >> x >> s;
            if(  s == "10" )
                oneLByte.push_back( { x , s } );
            else if( s == "01" )
                oneRByte.push_back( { x , s} );
            else if( s == "11" )
                Twobyte.push_back( {x , s} );
        }
        if( oneRByte.size() )
        {
            sort( oneRByte.begin(),oneRByte.end() , comp );
        }
        if( oneLByte.size() )
        {
            sort( oneLByte.begin(),oneLByte.end() , comp );
        }
        if( Twobyte.size() )
        {
            sort( Twobyte.begin(),Twobyte.end() , comp );
        }
        if( oneRByte.size() && oneLByte.size() && Twobyte.size() )
        {
            cout<<(ll)min( oneRByte[0].first + oneLByte[0].first , Twobyte[0].first )<<ln;
            continue;
        }
        else if( oneRByte.size() && oneLByte.size() )
        {
            cout<<oneRByte[0].first + oneLByte[0].first<<ln;
            continue;
        }
        else if( Twobyte.size() )
        {
            cout<<Twobyte[0].first<<ln;
            continue;
        }
        else
            cout<<-1<<ln;
    }
    return 0;
}