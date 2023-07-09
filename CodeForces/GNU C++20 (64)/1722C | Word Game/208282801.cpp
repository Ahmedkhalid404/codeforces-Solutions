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
        cin >> size;
        vector< vector< string > >words( 3 , vector< string >( size ) );
        map< string , ll >freq;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < size; ++j) {
                cin >> words[i][j];
                freq[ words[i][j] ]++;
            }
        }
        vector< ll >score(3);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < size; ++j) {
                score[i] += ( freq[ words[i][j] ] == 1 ? 3 : ( freq[ words[i][j] ] == 2  ? 1 : ( 0 ) ) );
            }
        }
        for(auto it : score) cout<<it<<" ";
        cout<<'\n';
    }
 
    return 0;
}