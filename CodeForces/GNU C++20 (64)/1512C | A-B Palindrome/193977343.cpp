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
    while(tt--){
        ll zeros , ones;
        string s;
        cin >> zeros >> ones;
        cin >> s;
        map<char , ll>freq;
        for (int i = 0; i < s.size(); ++i) {
            if( s[i] != '?' )
            {
                freq[ s[i] ]++;
            }
        }
        ll needZeros , needOnes;
        needZeros = zeros - freq['0'];
        needOnes = ones - freq['1'];
        for (int i = 0 , j = s.size() - 1; i <= j; ++i , j--) {
            if( i == j )
            {
                break;
            }
            if( s[i] == '?' && s[j] != '?' )
            {
                // j -> zero or one
                s[i] = s[j];
                if( s[j] == '0' )
                {
                    needZeros--;
                }
                else {
                    needOnes--;
                }
            }
            else if( s[j] == '?' && s[i] != '?' )
            {
                // i -> zero or one
                s[j] = s[i];
                if( s[i] == '0' )
                {
                    needZeros--;
                }
                else {
                    needOnes--;
                }
            }
        }
        // finish all cases that ? 1 or ? 0
        //if case size odd i don't know what is the best for the middle index
        // wait to end
        for (int i = 0 , j = s.size() - 1; i <= j; ++i , j--) {
            if( i == j )
            {
                if( ( needZeros > needOnes ) && ( s[i] == '?' ) )//if i need one and middle equal zero 
                {
                    s[i] = '0';
                    needZeros--;
                }
                else if(  s[i] == '?'  )
                {
                    s[i] = '1';
                    needOnes--;
                }
                break;
            }
            if( s[i] == '?' && s[j] == '?' )
            {
                if( needZeros > needOnes )
                {
                    s[i] = '0';
                    s[j] = '0';
                    needZeros = needZeros - 2;
                }
                else
                {
                    s[i] = '1';
                    s[j] = '1';
                    needOnes = needOnes - 2;
                }
            }
        }
        string s2 = s;
        reverse(s2.begin() , s2.end());
        if( s == s2 )
        {
            if( ( zeros == count(s.begin() , s.end() , '0') )&& ( ones == count(s.begin() , s.end() , '1') ) )
            {
                cout<<s<<ln;
            }
            else
            {
                cout<<-1<<ln;
            }
        }
        else
        {
            cout<<-1<<ln;
        }
 
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