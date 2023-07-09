#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    ll size = (ll)s.size();
    if( s.front() >= 'a' && s.front() <= 'z' )
    {
        bool flag = false;
        for (int i = 1; i < size; ++i) {
            if( s[i] >= 'a' && s[i] <= 'z' )
            {
                flag = true;
                break;
            }
        }
        if( flag )
            return cout<<s,0;
        cout<<char(s[0] - ('a' - 'A'));
        for (int i = 1; i < size; ++i) {
            if( s[i] >= 'A' && s[i] <= 'Z' )
                s[i] = s[i] + ( 'a' - 'A' );
            cout<<s[i];
        }
    }
    else
    {
        bool flag = false;
        for (int i = 1; i < size; ++i) {
            if( s[i] >= 'a' && s[i] <= 'z' )
            {
                flag = true;
                break;
            }
        }
        if( flag )
            return cout<<s,0;
        cout<<char(s[0] + ( 'a' - 'A' ));
        for (int i = 1; i < size; ++i) {
            if( s[i] >= 'A' && s[i] <= 'Z' )
                s[i] = s[i] + ( 'a' - 'A' );
            cout<<s[i];
 
    }
    }
    return 0;
}