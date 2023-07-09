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
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
int main() {
    _GOM3A_();
    //********** code ***************
    ll me,dragons;
    cin >> me >> dragons;
    vector< pair<ll,ll> >numbers(dragons);
    for (int i = 0; i < dragons; ++i) {
        cin >> numbers[i].first >> numbers[i].second;
    }
    Sort(numbers);
    for (int i = 0; i < dragons; ++i){
        if( numbers[i].first >= me)
            return cout<<"NO",0;
        me += numbers[i].second;
    }
    cout<<"YES";
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