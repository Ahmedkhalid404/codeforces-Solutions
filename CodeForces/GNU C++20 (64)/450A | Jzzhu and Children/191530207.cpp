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
template<typename T>
void doSomeThing(T &num );
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size , m;
    cin >> size >> m;
    deque< pair<ll , ll> >   numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i].first;
        numbers[i].second = i+1;
    }
    pair<ll,ll>num;
    while( numbers.size() > 1 )
    {
        num.first = numbers.front().first;
        num.second = numbers.front().second;
        numbers.pop_front();
        num.first = num.first - m;
        if( num.first > 0 )
        {
            numbers.push_back( {num} );
        }
    }
    cout<<numbers.front().second;
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
template<typename T>
void doSomeThing(T & num ){
    cin >> num;
}
 
 
 
 
 