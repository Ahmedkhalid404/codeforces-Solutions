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
#define what_is(x)          cerr << #x << " is " << x << "\n"
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define ln                  endl
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll n , x ;
    cin >> n >> x;
    vector<ll> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    Sort(numbers);
    ll count = 0;
    int j = 0;
    int i = 0;
    while ( i <= n ) {
        if( numbers[i] != j )
        {
            if( j == x )
            {
                return cout<<count,0;
            }
            else
            {
                count++;
                j++;
            }
        }
        else if( numbers[i] == j ){
            if( j == x )
            {
                return cout<<++count,0;
            }
            i++;
            j++;
        }
 
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}