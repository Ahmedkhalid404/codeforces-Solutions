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
#define ln                  endl
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    if( !(n%m) )
        return cout<<0,0;
    if(n < m)
    {
        return cout<<min( n*b , (m-n) * a ),0;
    }
    ll result = (ll)floor( n / (float)m ) - 1;
    ll minNum ;
    ll p = result;
    ll num =  m;
    while( num < n ){
        p++;
        num = p * m;
    }
    minNum = --p * m;
    cout<< min( (n - minNum) * b , (num - n) * a);
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