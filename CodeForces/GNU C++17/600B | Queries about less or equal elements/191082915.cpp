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
#define what_is(x)              cerr << #x << " is " << x << " ";
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
//**prototype**//
void toBinary(ll num);
int main() {
    _GOM3A_();
    //********** code ***************
    ll size1 , size2;
    cin >> size1 >> size2;
    dll numbers1(size1) , numbers2(size2);
    for (int i = 0; i < size1; ++i) {
        cin >> numbers1[i];
    }
    for (int i = 0; i < size2; ++i) {
        cin >> numbers2[i];
    }
    Sort(numbers1);
    for (int i = 0; i < size2 ; ++i) {
        ll num = numbers2[i];
        ll start = 0;
        ll end = size1 - 1;
        ll middle , ans = -1;
        while( start <= end ){
            middle = (start + end) / 2;
            if( numbers1[ middle ] <= num )
            {
                start = middle + 1;
                ans = middle;
            }
            else
                end = middle - 1;
        }
        cout<<ans+1<<" ";
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
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}
//biy mask
void toBinary(ll num){
    if( num <= 1 )
    {
        cout<<num;
        return ;
    }
    toBinary(num >> 1);
    cout<< (num & 1) ;
}