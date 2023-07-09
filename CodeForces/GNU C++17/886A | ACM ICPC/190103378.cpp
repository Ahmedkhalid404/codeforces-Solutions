/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <fcntl.h>
#include <io.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define Yes                 cout<<"YES"
#define yes                 cout<<"yes"
#define No                  cout<<"NO"
#define no                  cout<<"no"
#define ln                  endl
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    deque<ll>numbers(6);
    ll sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    for (int i = 0; i < numbers.size(); ++i) {
            for (int j = 0; j < numbers.size(); ++j) {
                if( j == i )
                    continue;
                for (int k = 0; k < numbers.size(); ++k) {
                    if( j == k || i == k )
                        continue;
                    if( ( numbers[i] + numbers[j] + numbers[k] ) * 2  == sum)
                    {
                        return Yes,0;
                    }
                }
            }
    }
    No;
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
    //_setmode(_fileno(stdout) , _O_U8TEXT);
    //string binary = bitset<8>(11).to_string();
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}