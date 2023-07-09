/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)              ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction                cout<< fixed <<showpoint <<setprecision
#define what_is(x)              cerr << #x << " is " << x << '\n';
#define PI                      3.141592653589793238462643383279
#define all(x)                  x.begin(),x.end()
#define Reverse(x)              reverse(all(x))
#define Sort(x)                 sort(all(x))
#define Yes                     cout<<"YES"
#define yes                     cout<<"yes"
#define No                      cout<<"NO"
#define no                      cout<<"no"
#define ln                      '\n'
typedef deque<long long>        dll;
typedef vector<long long>       vll;
typedef set<long long>          sll;
typedef long long               ll;
 
//**prototype**//
inline void _GOM3A_(void);
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--){
        ll size , k;
        cin >> size >> k;
        string s;
        cin >> s;
        if( k == 1 )
        {
            if( s.find('B') != -1 )
            {
                cout<<0<<ln;
                continue;
            }
            else{
                cout<<1<<ln;
                continue;
            }
        }
        ll i = 0;
        ll j = 0;
        map<char,ll>dp;
        for(;j<k;j++)
        {
            dp[ s[j] ]++;
        }
        j--;
        if( dp[ 'B' ] == k )
        {
            cout<<0<<ln;
            continue;
        }
        ll miCn = dp[ 'W' ];
        while( i < s.size() && (j+1) < s.size() ){
            //cout<<i<<" "<<j<<ln;
            //what_is(dp[ 'W' ]);
            //what_is( dp['B'] );
            dp[ s[i] ]--;
            i++;
            j++;
            dp[ s[j] ]++;
            if( dp[ 'W' ] < miCn )
            {
                miCn = dp['W'];
            }
        }
        cout<<miCn<<ln;
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(6);
    fast_IO(  author: _GOM3A_ );
 
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}