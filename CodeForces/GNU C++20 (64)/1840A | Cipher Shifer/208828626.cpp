#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll size;
        cin >> size;
        string s;
        cin >> s;
        char ch = s.front();
        cout<<ch;
        ll i = 1;
        while( i < size )
        {
            i = s.find( ch , i );
            if( i == s.size() - 1)
                break;
            i++;
            ch = s[i];
            cout<<ch;
            i++;
        }
        cout<<'\n';
    }
    return 0;
}