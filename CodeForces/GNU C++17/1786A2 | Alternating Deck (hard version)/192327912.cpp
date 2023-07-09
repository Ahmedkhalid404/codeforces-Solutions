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
typedef pair<ll,ll>             pl;
 
//**prototype**//
inline void _GOM3A_(void);
template<typename T, typename ...Opts>
bool any_of(T val, Opts ...opts);
ll getRandomNumber(ll low = 0, ll high = 100);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll tt;
    cin >> tt;
    while(tt--){
        ll n;
        pair<ll,ll>alic , pob;
        alic.first = 0;//white
        alic.second =0;//black
        pob.first = 0;
        pob.second = 0;
        cin >> n;
        alic.first++;
        n--;
        ll flag = 1,count = 2;
        while(n){
            if( flag == 1 || flag == 2 )//pob
            {
                flag++;
                //cout<<count<<" " <<n<<ln;
                if( n >= count ){
                    if( count % 2 == 0 ){
                        pob.first = pob.first + (count / 2);
                        pob.second = pob.second + (count / 2);
                    }
                    else{
                        pob.first = pob.first + (count / 2);
                        pob.second = pob.second + (count / 2 + 1);
                    }
                }
                else{
                    if( n % 2 == 0 )
                    {
                        pob.first = pob.first + (n / 2);
                        pob.second = pob.second + (n / 2);
                    }
                    else{
                        pob.first = pob.first + (n / 2);
                        pob.second = pob.second + (n / 2 + 1);
                    }
                    break;
                }
                n = n - count;
                count++;
            }
            else if( flag == 3 || flag == 4 )// alic
            {
                flag++;
                if( flag > 4 )
                    flag = 1;
                if( n >= count){
                    if( count % 2 == 0 )
                    {
                        alic.first = alic.first + (count / 2);
                        alic.second = alic.second + (count / 2);
                    }
                    else{
                        alic.first = alic.first + (count / 2 + 1);
                        alic.second = alic.second + (count / 2);
                    }
                }
                else{
                    if( n % 2 == 0 )
                    {
                        alic.first = alic.first + (n / 2);
                        alic.second = alic.second + (n / 2);
                    }
                    else{
                        alic.first = alic.first + (n / 2 + 1);
                        alic.second = alic.second + (n / 2);
                    }
                    break;
                }
                n -= count;
                count++;
            }
        }
        cout<<alic.first<<" "<<alic.second<<" "<<pob.first<<" "<<pob.second<<ln;
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
template<typename T,typename ...Opts>
bool any_of(T val, Opts ...opts)
{
    return ( ... || (val == opts) );
}
ll getRandomNumber(ll low , ll high ){
    static ll  fo = 0;
    if( fo == 92233720368547758 )
        fo = 0;
    srand((unsigned) time(NULL) + fo );
    fo++;
    return ( ( rand() % (high - low + 1)) + low );
}
// 500202