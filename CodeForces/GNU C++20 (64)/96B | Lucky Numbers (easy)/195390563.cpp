/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fraction                cout<< fixed <<showpoint <<setprecision
#define what_is(x)              cerr << #x << " is " << x << '\n';
#define PI                      3.141592653589793238462643383279
#define Write(x)                freopen (x,"w",stdout)
#define Read(x)                 freopen (x,"r",stdin)
#define all(x)                  x.begin(),x.end()
#define Reverse(x)              reverse(all(x))
#define Sort(x)                 sort(all(x))
#define Yes                     cout<<"YES"
#define yes                     cout<<"yes"
#define No                      cout<<"NO"
#define no                      cout<<"no"
#define pi                      acos(-1);
#define ln                      '\n'
typedef deque<long long>        dll;
typedef vector<long long>       vll;
typedef set<long long>          sll;
typedef long long               ll;
typedef pair<ll,ll>             pl;
 
//**prototype**//
inline void _GOM3A_(void);
deque< pair<ll,ll> > primeFactorization(ll n);
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts);
inline ll add(ll a , ll b , ll mod);
inline ll sub(ll a , ll b , ll mod);
inline ll mul(ll a , ll b , ll mod);
deque<ll> factorization(ll n);
ll binaryToDecimal(string s);
bool isPalindrome(string s);
ll fPow(ll base ,ll pow);
bool isPrime(ll n);
//**prototype**//
 
void solve(ll n , ll result  , set<ll> &hmm )
{
    //cout<<result<<ln;
    if(result >= n)
    {
        string s = to_string(result);
        ll f = 0 , v = 0;
        for (int i = 0; i < s.size(); ++i) {
            if( s[i] == '7' )
                v++;
            else
                f++;
        }
        if( v == f )
        {
            hmm.insert(result);
            return;
        }
        if( s.size() - to_string(n).size() > 1 )
            return;
        //cout<<s<<" "<<v<<" "<<f<<ln;
    }
    solve( n ,  ( ( result * 10 + 4 ) * 10 ) + 7,hmm );
    solve( n ,  ( ( result * 10 + 4 ) * 10 ) + 4 ,hmm );
    solve( n , ( ( result * 10  + 7 ) * 10 ) + 4,hmm );
    solve( n , (  ( result * 10 + 7 ) * 10 ) + 7 ,hmm );
}
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll n;
    sll result;
    cin >> n;
    solve(n , 0 , result);
    cout<<*result.begin();
    //********** code ***************
    return 0;
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(6);
    fast_IO(  author: _GOM3A_ );
}
template<typename T,typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
deque<ll> factorization(ll n){
    if( n <= 0 )
    {
        return (dll {});
    }
    if( n == 1 )
    {
        return (dll {1});
    }
    set<ll> result;
    ll i ;
    for(i = 1; i * i < n ; i++){
        if( !( n%i ) )
        {
            result.insert(i);
            result.insert(n/i);
        }
    }
    if( i * i == n )
        result.insert(i);
    return (dll{ all(result) });
}
deque< pair<ll,ll> > primeFactorization(ll n){
    if( n <= 0 )
    {
        return ( deque< pair<ll,ll> > {} );
    }
    if( n == 1 )
    {
        return ( deque< pair<ll,ll> > {{1, 1}} );
    }
    deque< pair<ll,ll> > primeFactor;
    for (int i = 2; i * i <= n; ++i) {
        if( !(n % i) )
            primeFactor.push_back({i,0});
        while( !( n % i ) )
        {
            primeFactor[ primeFactor.size() - 1 ].second ++;
            n /= i;
        }
    }
    if( n > 1 )
    {
        primeFactor.push_back({n,1});
    }
    return primeFactor;
}
bool isPalindrome(string s)
{
    ll size = s.size();
    for(int i = 0 , j = size - 1 ; i < j ; i++,j--)
    {
        if( s[i] != s[j] )
            return false;
    }
    return true;
}
vector<bool> Sieve(ll n)
{
    vector<bool> isPrime(n+1 , true);
    isPrime[0] = isPrime[1] = false;
    for(ll i = 2 ; i * i <= n ; ++i){
        if( isPrime[i] )
            for(int j = i * 2 ; j <= n ; j += i)
                isPrime[i] = false;
    }
    return isPrime;
}
inline ll add(ll a , ll b , ll mod)
{
    return ( (a % mod) + (b % mod) ) % mod;
}
inline ll sub(ll a , ll b , ll mod)
{
    return ( (a % mod) - (b % mod) + mod ) % mod;
}
inline ll mul(ll a , ll b , ll mod)
{
    return ( (a % mod) * (b % mod) ) % mod;
}
ll fPow(ll base,ll pow)
{
    if(!pow) return 1;
    ll result = fPow( base ,pow/2 );
    return ( pow & 1 ? result * result * base : result * result );
}