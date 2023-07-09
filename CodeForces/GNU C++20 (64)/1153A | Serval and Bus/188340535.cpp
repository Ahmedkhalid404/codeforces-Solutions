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
    ll *size = new ll;
    ll *time = new ll;
    cin >> *size >> *time;
    vector< pair<ll,ll> >bus(*size);
    for (int i = 0; i < *size; ++i) {
        cin >> bus[i].first;
        cin >> bus[i].second;
    }
    ll *minNum = new ll;
    ll *index = new ll;
    *minNum = 0;
    *index = 0;
    for (int i = 0; i < *size; ++i) {
        ll timeBus = bus[i].first;
        while( timeBus < *time ){
            timeBus += bus[i].second;
        }
        if( i == 0  )
        {
            *minNum = timeBus - *time  ;
            *index = i;
        }
        if( i > 0 && timeBus - *time    < *minNum )
        {
            *minNum = timeBus - *time   ;
            *index = i;
        }
        if( *minNum == 0 )
        {
            return cout<<*index+1,0;
        }
    }
    return cout<<*index+1,0;
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