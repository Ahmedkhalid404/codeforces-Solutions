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
    ll tt;
    cin >> tt;
    while(tt--){
        vll ordinaryNumbers = {1,2,3,4,5,6,7,8,9};
        ll n ;
        cin >> n;
        if( n <= 9 )
        {
            cout<<n<<ln;
            continue;
        }
        ll cnt = ordinaryNumbers.size();
        while(-404){
            for (int i = 0; i < ordinaryNumbers.size() ; ++i) {
                ordinaryNumbers[i] = (ordinaryNumbers[i] * 10) + (ordinaryNumbers[i] % 10);
                if( ordinaryNumbers[i] > n )
                {
                    goto jump;
                }
                else if( ordinaryNumbers[i] == n ){
                    cnt++;
                    goto jump;
                }
                cnt++;
            }
        }
        jump:
            cout<<cnt<<ln;
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
/*
 * vector
 * -------
 * v.emplace_back( element ) ---> v.push_back( element )
 * v.insert( v.begin() + index , element )
 * v.emplace( v.begin() + index , element )
 * v.erase(v.begin() + index)
 * v.erase( v.begin() + index1 , v.begin() + index2 ) will delete range from index1 to index2
 * sort( v.rbegin() , v.rend() ) to sort from greater
 * auto pair = minmax_element(v.begin() , v.end()); --> *pair.first = minElement
 * auto it = find_if( v.begin() , v.end() , func_name) -> must vector be sorted
 * */