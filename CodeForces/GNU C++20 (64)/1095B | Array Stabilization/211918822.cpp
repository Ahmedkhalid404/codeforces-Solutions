#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    if( size < 3 )
        return cout<<0,0;
    vector< ll >numbers( size );
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    sort( numbers.begin() , numbers.end() );
    cout<< (ll)min( numbers[ size - 2 ] - numbers[0] , numbers[size - 1] - numbers[1]);
    return 0;
}