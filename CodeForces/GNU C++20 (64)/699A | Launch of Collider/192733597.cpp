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
ll getRandomNumber(ll low = 0, ll high = 100);
ll fastpow(ll x , ll y);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size;
    string s;
    cin >> size >> s;
    vll numbers(size);
    for_each(numbers.begin() , numbers.end() , [](ll &x){cin >> x ; });
    ll find = 0;
    find = find = s.find("RL" );
    if( find == -1 )
        return cout<<-1,0;
    ll cnt = 0;
    ll mn = numbers[ size - 1 ] + 1;
    while( find != -1 ){
        //cout<<find<<ln;
        cnt = numbers[find + 1] - (  ( numbers[ find ] + numbers[ find + 1 ] ) / 2 ) ;
        if( cnt == 1 )
            return cout<<1,0;
        mn = min(mn , cnt);
        find = s.find("RL",find+1);
    }
    cout<<mn;
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
template<typename T,typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}
ll getRandomNumber(ll low , ll high ){
    static ll  fo = 0;
    if( fo == 92233720368547758 )
        fo = 0;
    srand((unsigned) time(NULL) + fo );
    fo++;
    return ( ( rand() % (high - low + 1)) + low );
}