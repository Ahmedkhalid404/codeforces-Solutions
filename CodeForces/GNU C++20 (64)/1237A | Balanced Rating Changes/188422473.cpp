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
typedef vector<long long>   vll;
typedef long long           ll;
 
//**prototype**//
 
inline void _GOM3A_(void);
 
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size;
    cin >> size;
    vll numbers(size),half(size);
    bool flag = false;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        if( numbers[i] % 2 )
        {
            if(flag)
            {
                half[i] = (ll)floor(numbers[i]/2.0);
                flag = false;
            }
            else
            {
                half[i] = (ll)ceil(numbers[i]/2.0);
                flag = true;
            }
        }
        else
        {
            half[i] = numbers[i] / 2;
        }
 
    }
    for (int i = 0; i < size; ++i) {
        cout<<half[i]<<ln;
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