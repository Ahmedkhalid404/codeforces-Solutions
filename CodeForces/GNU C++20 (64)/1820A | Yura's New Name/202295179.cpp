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
#define __max(x)                (*max_element(all(x)))
#define __min(x)                (*min_element(all(x)))
#define Read(x)                 freopen (x,"r",stdin)
#define sum(x)                  accumulate(all(x),0)
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
const   int mod = 1000000007;
const   ll  OO  = 0x3f3f3f3f3f3f3f3f;
const string alphabets = "abcdefghijklmnopqrstuvwxyz";
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
 
//**prototype**//
inline void _GOM3A_(void);
deque< pair<ll,ll> > primeFactorization(ll n);
//template<typename T, typename ...Opts>
//bool any_of(T val, Opts ...opts);
inline ll add(ll a , ll b , ll mod);
inline ll sub(ll a , ll b , ll mod);
inline ll mul(ll a , ll b , ll mod);
deque<ll> factorization(ll n);
ll binaryToDecimal(string s);
bool isPalindrome(string s);
int fpow_v1(int base,int power);
ll fpow(ll base,ll power);
bool isPrime(ll n);
inline ll setBit(ll num,ll idx,ll val);
inline ll flipBit(ll num,ll idx);
inline bool getBit(ll num,ll idx);
//**prototype**//
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    string smile;
    cin >> smile;
    if( smile.size() == 1)
    {
        if( smile == "^" )
            return void (cout<<1);
        else
            return void(cout<<2);
    }
    ll ans = 0;
    if( smile[0] == '_' )
    {
        ans++;
    }
    ll sz = smile.size();
    for (int i = 0; i < sz - 1; ++i) {
        if( smile[ i ] == '_' )
            if( smile[ i + 1 ] != '^' )
                ans++;
    }
    if( smile.back() == '_' )
        ans++;
    cout<<ans;
}
 
int main() {
    _GOM3A_();
#ifndef ONLINE_JUDGE
    Write("outputFile.txt");
    Read("inputFile.txt");
#endif
    //********** code ***************
    ll tt = 1;
    cin >> tt;
    while(tt--)
    {
        There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not();
        cout<<ln;
    }
    //********** code ***************
    return 0;
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(12);
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
    for(ll i = 2 ; i * i < n ; ++i){
        if( isPrime[i] )
            for(int j = i * i ; j <= n ; j += i)
                isPrime[j] = false;
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
int fpow_v1(int base,int power){
    if( !power )
        return !power;
    if( power & 1 ){
        return base * fpow_v1(base * base,(power-1) / 2 );
    }
    else
    {
        return fpow_v1( base * base ,power/2);
    }
}
ll fpow(ll base,ll power)
{
    if( !power )
        return !power;
    ll result = fpow(base,power / 2);
    return power & 1 ? result * result * base : result * result;
}
inline ll setBit(ll num,ll idx,ll val)
{
    return val ? (num | (1 << idx)) : (num & (~(1 << idx)));
}
inline ll flipBit(ll num,ll idx)
{
    return (num ^ (1 << idx) );
}
inline bool getBit(ll num,ll idx)
{
    return ( ( num >> idx ) & 1 );
}
void multiplicationOf2dMatrices(vector< vector<ll> >numbers1,vector< vector<ll> >numbers2,vector< vector<ll> >&result,ll r1,ll c2,ll com)
{
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < com; ++k) {
                result[i][j] += numbers1[i][k] * numbers2[k][j];
            }
        }
    }
}
void print2dMatrix(vector< vector<ll> >numbers)
{
    ll r = numbers.size();
    for (int i = 0; i < r; ++i) {
        ll c = numbers[i].size();
        for (int j = 0; j < c; ++j) {
            cout<<numbers[i][j]<<" ";
        }
        cout<<ln;
    }
}
void scan2dMatrix(vector< vector<ll> > &numbers,ll r,ll c){
    numbers.resize(r);
    for (int i = 0; i < r; ++i) {
        numbers[i].resize(c);
        for (int j = 0; j < c; ++j) {
            cin >> numbers[i][j];
        }
    }
}
void multiplicationOf2dMatrices(vector< vector<ll> >numbers1,vector< vector<ll> >numbers2,vector< vector<ll> >&result,ll r1,ll c2,ll com);
void print2dMatrix(vector< vector<ll> >numbers);
void scan2dMatrix(vector< vector<ll> > &numbers,ll r,ll c);
/*
  1) __builtin_popcount(ll num )  => counting ones in binary representation
  2) iota( numbers.begin() , numbers.end() , val ) =>  is used to assign successive values of value to every element in a specified range. The value gets incremented by 1 after assignment to an element.
 */