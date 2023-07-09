/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
vector<bool> sieve(ll n);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        ll i = 0 , j = 0;
        map<char,ll>freq;
        ll mn = s.size() + 1;
        while( i < s.size() && j < s.size() + 1 )
        {
            //cout<<mn<<" "<<i<<" "<<j<<ln;
            if( freq.size() < 3 )
            {
                freq[ s[j] ]++;
                j++;
            }
            else if( freq.size() == 3 )
            {
                //cout<<i<<" "<<j<<ln;
                mn = min( mn , j - i );
                freq[ s[i] ]--;
                if( freq[ s[i] ] < 1 )
                {
                    freq.erase( s[i] );
                }
                i++;
 
            }
            else
            {
                freq[ s[i] ]--;
                if( freq[ s[i] ] < 1 )
                {
                    freq.erase( s[i] );
                }
                i++;
            }
 
        }
        if( mn == s.size()  + 1 )
        {
            cout<<0<<ln;
            continue;
        }
        cout<<mn<<ln;
    }
    //********** code ***************
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
    dll m   ( all(result) );
    return m;
}
bool isPalindrome(string s)
{
    ll size = s.size();
    ll halfSize = s.size() / 2;
    for (int i = 0; i < halfSize; i++) {
        if (s[i] != s[size - i - 1]) {
            return false;
        }
    }
    return true;
}
ll binaryToDecimal(string s)
{
    bitset<64> bits(s);
    ll number = bits.to_ulong();
    return number;
    //return stol(s,nullptr,2);
}
vector<bool> sieve(ll n){
    vector<bool> is_prime(n+1,true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if( is_prime[i] && (long long)i * i <= n  )
            for (int j = i * i; j <= n; j+=i)
                is_prime[j] = false;
 
    }
}