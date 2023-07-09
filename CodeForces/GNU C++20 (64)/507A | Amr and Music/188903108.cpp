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
    ll size,spaceTime;
    cin >> size >> spaceTime;
    vector< pair<ll,ll> >instruments(size);
    vll result;
    for (int i = 0; i < size; ++i) {
        cin >> instruments[i].first;
        instruments[i].second = i+1;
    }
    Sort(instruments);
    int i = 0;
    while(spaceTime){
        if( instruments[i].first > spaceTime || i > size-1) {
            break;
        }
        result.push_back(instruments[i].second);
        spaceTime -= instruments[i].first;
        i++;
    }
    cout<<result.size()<<ln;
    for (int j = 0; j < result.size(); ++j) {
        cout<<result[j]<<" ";
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