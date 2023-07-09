/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define mod                 (ll)1e9+7
#define ln                  endl
typedef vector<long long>   vll;
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
vector<bool>isPrime(1000009,true);
 
int main() {
    _GOM3A_();
    //********** code ***************
    for (ll i = 2; i <= 1000; ++i) {
        for (ll j = i; j*i <= 1000000; ++j) {
            isPrime[i*j] = false;
        }
    }
    ll tt;
    cin >> tt;
    while(tt--)
    {
        ll num;
        cin >> num;
        if(num == 1)
        {
            cout<<"NO"<<ln;
            continue;
        }
        ll sq = (ll)sqrt( num );
        if( sq * sq == num )
            if( isPrime[sq] )
                cout<<"YES"<<ln;
            else
                cout<<"NO"<<ln;
        else
            cout<<"NO"<<ln;
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(9);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}