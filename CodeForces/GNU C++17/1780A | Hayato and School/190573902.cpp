/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define yes                 cout<<"yes"
#define Yes                 cout<<"YES"
#define No                  cout<<"NO"
#define no                  cout<<"no"
#define ln                  '\n'
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--){
        ll size;
        cin >> size;
        deque<pair<ll,ll>>even,odd;
        for (int i = 0; i < size; ++i) {
            ll num;
            cin >> num;
            if(  num & 1 )
                odd.push_back( {num,i+1} );
            else
                even.push_back({num,i+1});
        }
        if( odd.size() >= 3 )
        {
            Yes<<ln;
            cout<<odd[0].second<<" "<<odd[1].second<<" "<<odd[2].second<<ln;
        }
        else if( even.size() >= 2 && odd.size() >= 1 )
        {
            Yes<<ln;
            cout<<even[0].second<<" "<<even[1].second<<" "<<odd[0].second<<ln;
        }
        else
        {
            No<<ln;
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