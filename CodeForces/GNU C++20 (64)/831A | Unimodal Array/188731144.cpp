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
    ll size;
    cin >> size;
    if( size == 1 )
        return cout<<"YES",0;
    vector<ll>numbers(size);
    set<ll>n;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        n.insert(numbers[i]);
    }
    if( n.size() == 1 )
        return cout << "YES", 0;
 
    bool inc = false;
    bool de  = false;
    bool equal = false;
    for (int i = 0; i < size-1; ++i) {
        if (i == 0) {
            if (numbers[i] < numbers[i + 1])
                inc = true;
            else if(numbers[i] == numbers[i+1])
                equal = true;
            else if (numbers[i] > numbers[i+1])
                de = true;
        }
        else if (inc) {
            if (numbers[i] == numbers[i + 1]) {
                equal = true;
                inc = false;
            }
            if( numbers[i] > numbers[i+1])
            {
                de = true;
                inc = false;
            }
        }
        else if(equal){
            if( numbers[i] < numbers[i+1] )
                return cout << "NO", 0;
            if( numbers[i] > numbers[i+1] )
            {
                equal = false;
                de = true;
            }
 
        }
        else if (de) {
            if (numbers[i] < numbers[i + 1])
                return cout << "NO", 0;
            if(numbers[i] == numbers[i+1])
                return cout << "NO", 0;
        }
    }
        cout<<"YES";
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