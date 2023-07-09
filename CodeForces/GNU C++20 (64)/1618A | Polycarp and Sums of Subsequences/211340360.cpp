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
        size = 7;
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        cout<<numbers[0]<<' '<<numbers[1]<<' ';
        if( numbers[0] + numbers[1] == numbers[2] )
            cout<<numbers[3];
        else
            cout<<numbers[2];
        cout<<'\n';
    }
    return 0;
}