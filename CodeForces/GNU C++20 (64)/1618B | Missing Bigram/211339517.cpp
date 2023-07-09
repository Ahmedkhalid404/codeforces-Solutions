#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size;
        cin >> size ;
        vector< string >bigrams( size - 2 );
        for (int i = 0; i < size - 2; ++i) {
            cin >> bigrams[i];
        }
        bool flag = false;
        string res = "";
        ll cnt = 0;
        for (int i = 0; i < size - 3; ++i) {
            if( !flag )
            {
                cout<<bigrams[ i ][0];
                cnt++;
            }
            cout<<bigrams[i][1];
            cnt++;
            if( bigrams[i][1] == bigrams[i + 1][0] )
            {
                flag = true;
            }
            else
                flag = false;
        }
        if( !flag )
        {
            cout<<bigrams.back()[0];
            cnt++;
        }
        cout<<bigrams.back()[1];
        cnt++;
        if( cnt < size )
        {
            if( bigrams.back()[1] == 'b' )
                cout<<'a';
            else
                cout<<'b';
        }
        cout<<'\n';
    }
    return 0;
}