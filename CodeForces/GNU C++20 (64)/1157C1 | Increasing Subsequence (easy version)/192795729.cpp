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
bool isPrime(ll n);
//**prototype**//
 
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size;
    cin >> size;
    dll numbers(size),result;
    for_each(numbers.begin() , numbers.end() , [](ll &x){cin >> x ; });
    string s= "";
    ll i = 0 , j = numbers.size() - 1;
    if( numbers[i] < numbers[j] ){
        result.push_back(numbers[i]);
        numbers.pop_front();
        s += 'L';
        j = numbers.size() - 1;
    }
    else{
        result.push_back(numbers[j]);
        numbers.pop_back();
        s+='R';
        j = numbers.size() - 1;
    }
    while( true ){
        if(j < 0)
            break;
        if( numbers[i] >= result[ result.size() - 1 ] ){
            if( i == j)
            {
                result.push_back(numbers[j]);
                numbers.pop_back();
                s+='R';
                j = numbers.size() - 1;
            }
            else if( numbers[j] < numbers[i] && numbers[j] >= result[ result.size() - 1 ])
            {
                result.push_back(numbers[j]);
                numbers.pop_back();
                s+='R';
                j = numbers.size() - 1;
            }
            else{
                result.push_back(numbers[i]);
                numbers.pop_front();
                s += 'L';
                j = numbers.size() - 1;
            }
        }
        else if( numbers[j] >= result[ result.size() - 1 ] )
        {
            if( numbers[i] < numbers[j] && numbers[i] >= result[ result.size() - 1 ])
            {
                result.push_back(numbers[i]);
                numbers.pop_front();
                s += 'L';
                j = numbers.size() - 1;
            }
            else
            {
                result.push_back(numbers[j]);
                numbers.pop_back();
                s+='R';
                j = numbers.size() - 1;
            }
        }
        else
        {
            break;
        }
    }
    cout<<result.size()<<ln;
    cout<<s;
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