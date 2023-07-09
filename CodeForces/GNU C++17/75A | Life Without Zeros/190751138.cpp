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
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll x,y;
    cin >> x >> y;
    ll sumWithzeros = x+y;
    string s1 = to_string(x), s2 = to_string(y) , s3 = to_string(sumWithzeros);
    for(int i=0;i<s1.size();i++)
    {
        if( s1[i] == '0'  )
            s1.erase(i,1),i--;
    }
    for(int i=0;i<s2.size();i++)
    {
        if( s2[i] == '0'  )
            s2.erase(i,1) , i--;
    }
    for(int i=0;i<s3.size();i++)
    {
        if( s3[i] == '0'  )
            s3.erase(i,1),i--;
    }
    x = stoi(s1);
    y = stoi(s2);
    ll result = stoi(s3);
    if( x + y == result )
        Yes;
    else
        No;
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