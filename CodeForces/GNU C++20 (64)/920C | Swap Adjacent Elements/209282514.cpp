#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    ll arr[ 200005 ] = {0};
    cin >> size;
    string s;
    vector< ll >numbers( size );
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cin >> s;
    for (int i = 0; i < size - 1; ++i) {
        if( numbers[i] != i + 1 )
        {
            ll mx = (ll)max( numbers[i] - 1 , (ll)i );
            ll mn = (ll)min( numbers[i] - 1 , (ll)i );
            arr[ mn ]++;
            arr[ mx ]--;
        }
    }
    ll sum = 0;
    for (int i = 0; i < size - 1; ++i) {
        sum += arr[i];
        arr[i] = sum;
    }
    for (int i = 0; i < size - 1; ++i) {
        if( arr[i] )
        {
            if( s[i] == '0' )
                return cout<<"NO",0;
        }
    }
    cout<<"YES";
    return 0;
}