/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
using namespace std;
#define all(x)              x.begin(),x.end()
#define Sort(x)             sort(all(x))
#define Reverse(x)          reverse(all(x))
#define ln                  endl
#define MAX                 500
#define fraction            cout<< fixed <<showpoint <<setprecision
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define PI                  3.141592653589793238462643383279
#define what_is(x)          cerr << #x << " is " << x << " ";
typedef long long           ll;
int main() {
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
    //**********code***************
    ll n;
    cin >> n;
    n = n * n;
    for (int i = 1,j = n; i < j; ++i,j--) {
        cout<<i<<" "<<j<<ln;
    }
    //**********code***************
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}