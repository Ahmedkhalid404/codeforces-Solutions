/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <fcntl.h>
#include <io.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define Yes                 cout<<"YES"
#define yes                 cout<<"yes"
#define No                  cout<<"NO"
#define no                  cout<<"no"
#define ln                  endl
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while( tt-- ){
        ll num;
        cin >> num;
        deque<ll>numbers(num);
        vector< vector<ll> > result( num - 1,vector<ll>(2) );
        for (int i = 0; i < num; ++i) {
            numbers[ i ] = i + 1;
        }
        ll count = 0;
        while( numbers.size() != 1 )
        {
            ll last =  numbers[ numbers.size() - 1 ] , preLast = numbers[ numbers.size() - 2 ];
            numbers.pop_back();
            numbers.pop_back();
            numbers.push_back( ceil( (last + preLast)/2.0 ) );
            result[ count  ][0] = last;
            result[ count++ ][1] = preLast;
        }
        cout<<numbers[0]<<ln;
        for (int i = 0; i < result.size(); ++i) {
            cout<<result[i][0]<<" "<<result[i][1]<<ln;
        }
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
    //_setmode(_fileno(stdout) , _O_U8TEXT);
    //string binary = bitset<8>(11).to_string();
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}