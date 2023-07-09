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
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        for (int i = 0; i < size; ++i) {
            cout<<(size+1) - numbers[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}