#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size , k ; cin >> size >> k;
        vector< ll >numbers(size);
        ll sum = 0;
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
            sum += numbers[i];
        }
        sort( numbers.begin() , numbers.end());
        vector< ll >prefix( size + 1 ) , suffix( size + 1 );
        for (int i = 1; i <= size; ++i) {
            prefix[i] = prefix[i - 1] + numbers[i - 1];
        }
        for (int i = size - 1; i > -1; --i) {
            suffix[ i ] = suffix[i + 1] + numbers[i];
        }
        ll i = k * 2;
        ll j = size;
        ll mx = -1;
        while( i > -1 )
        {
            //cout<<i<<" "<<j<<ln;
            mx = (ll)max(sum -  (prefix[ i ] + suffix[ j ]) , mx );
            ----i;
            j--;
        }
        cout<<mx<<ln;
    }
    return 0;
}