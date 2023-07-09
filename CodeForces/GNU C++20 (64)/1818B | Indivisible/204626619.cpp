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
        ll n ;
        cin >> n;
        if( n & 1 )
        {
            if( n == 1 )
            {
                cout<<1<<ln;
                continue;
            }
            cout<<-1<<ln;
            continue;
        }
        vector< ll >numbers( n );
        iota( numbers.begin() , numbers.end() , 1 );
        for (int i = 0; i < n - 1; i += 2) {
            swap( numbers[i] , numbers[i + 1] );
        }
        for_each(numbers.begin() , numbers.end() , [](ll &x){cout << x <<" " ; });
        cout<<ln;
    }
    return 0;
}