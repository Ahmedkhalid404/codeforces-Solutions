#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    string codeforces = "codeforces";
    while( tt-- )
    {
        ll size;
        cin >> size;
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        ll i = 0 ;
        ll mx = 0;
        ll cnt = 0;
        while( i < size )
        {
            if( numbers[i] == 0 )
            {
                cnt++;
                mx = (ll)max( cnt , mx );
            }
            else
                cnt = 0;
            i++;
        }
        cout<<mx<<ln;
    }
    return 0;
}