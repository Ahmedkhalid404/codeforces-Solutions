#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    ll size = s.size();
    if( count(s.begin() , s.end() , 'a') == size )
    {
        s.back() = 'z';
        return cout<<s,0;
    }
    ll st = -1;
    for (int i = 0; i < size; ++i) {
        if( s[i] != 'a' )
        {
            st = i;
            break;
        }
    }
    ll ed = st;
    while( ed < size )
    {
        if( s[ ed ] == 'a' )
            break;
        ed ++;
    }
    if( s[ ed ] == 'a' )
        ed--;
    for (int i = 0; i < size; ++i) {
        if( i >= st && i <= ed )
        {
            char ch = s[i];
            ch--;
            cout<<ch;
        }
        else
        {
            cout<<s[i];
        }
    }
    return 0;
}