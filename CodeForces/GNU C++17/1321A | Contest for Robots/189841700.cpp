/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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
    ll size;
    cin >> size;
    vector<bool>hmada(size),mohsen(size);
    for (int i = 0; i < size; ++i) {
        ll num;
        cin >> num;
        hmada[i] = num;
    }
    for (int i = 0; i < size; ++i) {
        ll num;
        cin >> num;
        mohsen[i] = num;
    }
    ll countHmada = 0;
    ll countMohsen = 0;
    for (int i = 0; i < size; ++i) {
        if( (hmada[i]) && (!mohsen[i]) )
            countHmada++;
        else if( (!hmada[i]) && (mohsen[i]) )
            countMohsen++;
    }
    if( (!countHmada && !countMohsen ) || (!countHmada) )
        return cout<<-1,0;
 
    if( countHmada == 1 )
        return cout<<countMohsen+1,0;
    countMohsen++;
    cout<< (ll)ceil( countMohsen / (double) countHmada );
 
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