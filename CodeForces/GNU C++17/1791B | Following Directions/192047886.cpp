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
typedef pair<ll,ll>             pl;
 
//**prototype**//
inline void _GOM3A_(void);
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts);
template<typename T>
void doSomeThing(T &num );
auto getRandomNumber(ll low = 0, ll high = 100);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt,size;
    pair<ll,ll>x_y;
    string s;
    cin >> tt;
    while(tt--){
        x_y.first = 0;
        x_y.second = 0;
        cin >> size >> s;
        for (int i = 0; i < size; ++i) {
 
            if( s[i] == 'U' )
                x_y.second++;
            else if( s[i] == 'D' )
                x_y.second--;
            else if( s[i] == 'L' )
                x_y.first--;
            else if(s[i] == 'R')
                x_y.first++;
            if( (x_y.first == 1) && (x_y.second == 1) )
            {
                Yes<<ln ;
                goto jump ;
            }
        }
        No<<ln;
        jump:;
        
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(6);
    fast_IO(  author: _GOM3A_ );
    //srand((unsigned) time(NULL));
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}
template<typename T,typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}
template<typename T>
void doSomeThing(T & num ){
    cin >> num;
}
auto getRandomNumber(ll low , ll high ){
    static ll  fo = 0;
    if( fo == 92233720368547758 )
        fo = 0;
    srand((unsigned) time(NULL) + fo );
    fo++;
    return ( ( rand() % (high - low + 1)) + low );
}