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
 
 
bool isPrime(ll n);
int main() {
    _GOM3A_();
    //********** code ***************
    ll num;
    cin >> num;
    ll result = 0;
    for (int i = 6; i <= num; ++i) {
        ll count = 0;
        for (int j = 2; j < i; ++j) {
            if( i % j == 0 && isPrime(j) )
            {
                count++;
            }
        }
        if(count == 2)
            result++;
    }
 
    cout<<result;
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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}