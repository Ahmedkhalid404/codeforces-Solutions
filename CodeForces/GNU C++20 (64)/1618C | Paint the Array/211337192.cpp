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
            vector< ll >numbres( size );
            for(int i = 0;i < size; i++){
                cin >> numbres[i];
            }
            ll gcd1 = numbres.front();
            for (int i = 0; i < size; i+=2) {
                gcd1 = gcd(gcd1 , numbres[i] );
            }
            ll gcd2 = numbres[1];
            for (int i = 1; i < size; i+=2) {
                gcd2 = gcd(gcd2 , numbres[i] );
            }
            ll d = gcd1;
            bool flag = ( numbres[0] % d ) == 0;
            for (int i = 1; i < size; ++i) {
                bool f = ( numbres[i] % d ) == 0;
                if( flag == f )
                {
                    d = gcd2;
                    flag = ( numbres[0] % d ) == 0;
                    for (int i = 1; i < size; ++i) {
                        bool f = ( numbres[i] % d ) == 0;
                        if( flag == f ) {
                            cout<<0<<'\n';
                            goto jump;
                        }
                        flag = f;
                    }
                }
                flag = f;
            }
            cout<<d<<'\n';
            jump:;
        }
    return 0;
}