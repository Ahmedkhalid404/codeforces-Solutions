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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll size;
        cin >> size;
        if(size == 1)
        {
            cout<<"NO\n";
            continue;
        }
        vector<ll>numbers(size);
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        if( numbers.front() == numbers.back() )
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<numbers[ size-1 ]<<" ";
        size--;
        for (int i = 0; i < size; ++i) {
            cout<<numbers[i]<<" ";
        }
        cout<<ln;
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