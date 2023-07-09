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
#define ln                  "\n"
typedef vector<long long>   vll;
typedef long long           ll;
 
//**prototype**//
 
inline void _GOM3A_(void);
 
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size,k,sum = 0;
    cin >> size >> k;
    set<ll>numbers;
    for (size_t i = 0; i < size; ++i) {
        ll num;
        cin >> num;
        numbers.insert(num);
    }
    auto it = numbers.begin();
 
    while(k--)
    {
        if( it == numbers.end() ){
            k++;
            while(k--)
            {
                cout<<0<<ln;
            }
            return 0;
        }
        if(it == numbers.begin())
            cout<<*it<<ln;
        else {
            ll num = *(--it);
            it++;
            cout<<*it-num<<ln;
        }
        it++;
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
/*
 * 1 2 3 4 5
 * 0 1 2 3 4
 * 2 - 1 - > 1
 * 0 0 1 2 3
 * ( 3 - prefix[ 2 - 1 ] ) - ( 2 - prefix[ 2 - 1 ] ) - >  ( (2) - (1)) = 1
 * --------------------------------------------------------------------------
 * 2 8 15 20 30 55
 * 0 6 13 18 28 53
 * ( 8 - prefix[ 1 - 1 ] ) = 6
 * 0 0 7 12 22 47
 *
 * 0 0 0 5 15 40
 *
 *
 *
 *
 *
 * */