/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define mod                 (ll)1e9+7
#define ln                  endl
typedef vector<long long>   vll;
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
 
string s1,s2;
vector<int>numbers;
bool valid(long long m )
{
    string temp = s1;
    for (int i = 0; i < m; ++i) {
        temp[ numbers[ i ] - 1 ] = '*';
    }
    for (int i = 0,j=0; i < temp.size(); ++i) {
        if( temp[i] == s2[j] )
        {
            j++;
        }
        if( j == s2.size() )
            return true;
    }
    return false;
}
 
int main() {
    _GOM3A_();
    //********** code ***************
    cin >> s1 >> s2;
    numbers.resize( s1.size() );
    for (int i = 0; i < s1.size(); ++i) {
        cin >> numbers[i];
    }
    ll start = 0;
    ll end = s1.size();
    ll middle,ans = -1;
    valid( 4 );
    while( start <= end )
    {
        middle = (start + end)/2;
        if(valid(middle))
        {
            ans = middle;
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    cout<<ans;
 
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(15);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}