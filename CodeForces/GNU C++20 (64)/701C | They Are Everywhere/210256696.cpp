 
#include <bits/stdc++.h>
using namespace std;
#define fast_IO(x)              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long               ll;
inline void _GOM3A_(void);
 
 
int main() {
    _GOM3A_();
    //********** code ***************
    ll size(0);
    cin >> size;
    string s;
    cin >> s;
    map<char,ll>freq;
    set<char>dis;
    for (int i = 0; i < s.size(); ++i) {
        dis.insert( s[i] );
    }
    ll i = 0 , j = 0;
    ll cnt = 0;
    ll mn = size + 1;
    while( i < size && j < size + 1 )
    {
        if( (ll)freq.size() < (ll)dis.size() )
        {
            freq[ s[j] ]++;
            j++;
            cnt++;
        }
        else if( (ll)freq.size() == (ll)dis.size() )
        {
            mn = min(mn , cnt);
            freq[ s[i] ]--;
            if( freq[ s[i] ] < 1 )
                freq.erase( s[i] );
            i++;
            cnt--;
        }
    }
    cout<<mn;
    //********** code ***************
    return 0;
}
inline void _GOM3A_(void){
    fast_IO(  author: _GOM3A_ );
}