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
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts);
ll getRandomNumber(ll low = 0, ll high = 100);
bool isPrime(ll n);
deque<ll> factorization(ll n);
bool isPalindrome(string s);
ll binaryToDecimal(string s);
vector<bool> Sieve(ll n);
deque< pair<ll,ll> > primeFactorization(ll n);
inline ll add(ll a , ll b , ll mod);
inline ll sub(ll a , ll b , ll mod);
inline ll mul(ll a , ll b , ll mod);
ll fastPowIterative(ll base ,ll pow);
//**prototype**//
 
enum isHappend {not_found , found};
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        ll size = s.size();
        if( size == 1 )
        {
            cout<<s<<ln;
            continue;
        }
        isHappend flag = not_found;
        string s2;
        for (int i = size - 1; i > 0; --i) {
            s2 = to_string( ( s[i] - '0' ) + (s[i - 1] - '0') );
            //cout<<s[i]<<" "<<s[i - 1]<<ln;
            if( s2.size() > 1 )
            {
                //cout<<"1 "<<s2<<ln;
                flag = found;
                s[i]     = s2[1];
                s[i - 1] = s2[0];
                break;
            }
        }
        if( !flag )//not found
        {
            s2 = to_string( ( s[ 0 ] - '0' ) + ( s[ 1 ] - '0') );
            //cout<<"2 "<<s2;
            s.replace(0 , 2 , s2);
        }
        cout<<s<<ln;
        //cout<<"----------------"<<ln;
    }
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
ll getRandomNumber(ll low , ll high ){
    static ll  fo = 0;
    if( fo == 92233720368547758 )
        fo = 0;
    srand((unsigned) time(NULL) + fo );
    fo++;
    return ( ( rand() % (high - low + 1)) + low );
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
        dll numbers = {1};
        return numbers;
    }
    set<ll> result;
    ll i ;
    for(i = 1; i * i  < n ; i++){
        if( !( n%i ) )
        {
            result.insert(i);
            result.insert(n/i);
        }
    }
    if(i*i==n)
        result.insert(i);
    dll resultInDeque( all(result) );
    return resultInDeque;
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
    string s2 = s;
    reverse(s2.begin() , s2.end());
    return (s2 == s);
}
ll binaryToDecimal(string s)
{
    bitset<64> bits(s);
    ll number = bits.to_ulong();
    return number;
    //return stol(s,nullptr,2);
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
ll fastPowIterative(ll base,ll pow)//O(log2(n))
{
    ll result = 1;
    while(pow > 0)
    {
        if( pow & 1 )
            result *= base;
        base = base*base;
        pow /= 2;
    }
    return result;
}