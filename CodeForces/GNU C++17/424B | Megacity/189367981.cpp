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
ll n , pop , sum = 0;
vector< pair<double,ll> >numbers;
 
 
bool valid(double m)
{
    ll sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if( numbers[i].first > m)
            break;
        sum += numbers[i].second;
    }
    if( sum + pop  >= 1e6)
        return true;
    return false;
}
 
int main() {
    _GOM3A_();
    //********** code ***************
    cin >> n >> pop , sum = pop ;
    numbers.resize(n);
    for (int i = 0; i < n; ++i) {
        double x , y ;
        cin >> x >> y >> numbers[i].second;
        numbers[i].first = sqrt(x*x + y*y) ;
        sum += numbers[i].second;
    }
    if( sum < (ll)1e6 )
        return cout<<-1,0;
    Sort(numbers);
    double start = 1,end = 1e9;
    double middle,ans = -1;
    for (int i = 0; i < 200; ++i) {
        middle = (start + end) / 2;
        if(valid(middle))
        {
            ans = middle;
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    cout<<ans;
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(9);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}