#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll n , m , k , q;
    cin >> n >> m >> k >> q;
    vector< ll >waste(k);
    vector< string > fruits = {"Carrots" , "Kiwis" , "Grapes"};
    for (int i = 0; i < k; ++i) {
        ll r , c;
        cin >> r >> c;
        waste[i] = ( ( r - 1 ) * m ) + c;
    }
    sort(waste.begin(),waste.end());
    while( q-- )
    {
        ll r , c;
        cin >> r >> c;
        ll ceil = ( ( r - 1 ) * m ) + c;
        //--------------------------------
        ll st = 0;
        ll ed = k - 1;
        ll md , ans = -1;
        while( st <= ed )
        {
            md = (st + ed) / 2;
            if( waste[ md ] <= ceil )
            {
                ans = md;
                st = md + 1;
            }
            else
                ed = md - 1;
        }
        //---------------------------------
        if( ans != -1 )
        {
            if( waste[ans] == ceil )
            {
                cout<<"Waste"<<ln;
                continue;
            }
        }
        ans ++;
        ll realFruit = (ceil - 1) % 3;
        while( ans -- )
        {
            realFruit--;
            if( realFruit < 0 )
                realFruit = 2;
        }
        cout<<fruits[realFruit]<<ln;
    }
    return 0;
}