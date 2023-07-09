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
    ll size,k,minSum=0,index=0,minNum,minIndex;
    cin >> size >> k;
    vector<ll>numbers(size),prefix(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        minSum += numbers[i];
        prefix[i] = minSum;
        if( i == 0 )
        {
            minNum = numbers[i];
            minIndex = 0;
        }
        else if( numbers[i] < minNum )
        {
            minNum = numbers[i];
            minIndex = i;
        }
    }
    if(k == 1)
        return cout<<minIndex+1,0;
    for (int i = 0; i < size-k+1; ++i) {
        ll sum = 0;
        if( i == 0 )
        {
            minSum = prefix[ k - 1 ];
            index = i;
        }
        else
        {
            sum = prefix[ i + (k-1) ] - prefix[i-1];
            if( sum < minSum )
            {
                minSum = sum;
                index = i;
            }
        }
 
    }
    cout<<index+1;
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
/*
 * 7 3
 * arr      ->  1   2    6   1   1   7   1
 * prefix   ->  1   3    9   10  11  18  19
 *
 *
 * */