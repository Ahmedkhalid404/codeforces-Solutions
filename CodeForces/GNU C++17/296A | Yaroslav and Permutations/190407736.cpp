/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                   3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define yes                 cout<<"yes"
#define Yes                 cout<<"YES"
#define No                  cout<<"NO"
#define no                  cout<<"no"
#define ln                  '\n'
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
        return Yes,0;
    map<ll,ll>numbers;
    set<ll>sortNums;
    for (int i = 0; i < size; ++i) {
        ll num;
        cin >> num;
        numbers[num]++;
        sortNums.insert( num );
    }
    ll maxNum = 0 , count;
    ll i = 0;
    for (auto it : numbers) {
        if( i == 0 )
        {
            maxNum = it.first;
            count = it.second;
            i++;
        }
        else
        {
            if( it.second > count )
            {
                maxNum = it.first;
                count = it.second;
            }
        }
    }
    ll result = (ll)ceil(size/2.0);
    if( numbers[maxNum] <= result )
        Yes;
    else
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