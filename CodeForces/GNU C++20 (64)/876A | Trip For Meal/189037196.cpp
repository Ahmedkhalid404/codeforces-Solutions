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
#define SortG(x)            sort(all(x), greater<long long>());
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
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll count = 0;
    if(n == 1)
        return cout<<0,0;
    bool r=true,o=false,e=false;
    n--;
    while( n-- )
    {
        if( r )
        {
            if( a <= b )
            {
                count += a;
                o = true;
            }
            else if( b < a )
            {
                count += b;
                e = true;
            }
            r = false;
        }
        else if( o )
        {
            if( a <= c )
            {
                count += a;
                r = true;
            }
            else if( c < a )
            {
                count += c;
                e = true;
            }
            o = false;
        }
        else if( e )
        {
            if( b <= c )
            {
                count += b;
                r = true;
            }
            else if( c < b )
            {
                count += c;
                o = true;
            }
            e = false;
        }
    }
    cout<<count;
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