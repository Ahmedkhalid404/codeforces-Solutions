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
#define SortG(x)            sort(all(x), greater<long long>());
#define what_is(x)          cerr << #x << " is " << x << "\n"
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define ln                  "\n"
typedef vector<long long>   vll;
typedef long long           ll;
 
//**prototype**//
 
inline void _GOM3A_(void);
 
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--){
        ll size;
        cin >> size;
        string s1 ,s2;
        cin >> s1 >> s2;
        if( s2.find('1') == -1 )
        {
            cout<<0<<ln;
            continue;
        }
        if( s1.find('1') == -1 )
        {
            cout<< count(s2.begin(),s2.end(),'1')<<ln;
            continue;
        }
        ll count = 0;
        for (int i = 0; i < s2.size(); ++i) {
            if( s2[i] == '1' )
            {
                if( s1[i] == '0' )
                {
                    count++;
                }
                else if( i-1 > -1 && s1[i-1] == '1' )
                {
                    s1[i-1] = '0';
                    count++;
                }
                else if( i+1 < s1.size() && s1[i+1] == '1' )
                {
                    s1[i+1] = '0';
                    count++;
                }
            }
        }
        cout<<count<<ln;
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}