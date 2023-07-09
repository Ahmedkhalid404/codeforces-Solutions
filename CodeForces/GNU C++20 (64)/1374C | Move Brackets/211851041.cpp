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
        string s;
        cin >> size >> s;
        stack< char >brackets;
        for (int i = 0; i < size; ++i) {
            if( brackets.empty() )
                brackets.push( s[i] );
            else
            {
                if( (brackets.top() == '(') && (  s[i] == ')') )
                    brackets.pop();
                else
                    brackets.push( s[i] );
            }
        }
        cout<<brackets.size() / 2<<'\n';
    }
    return 0;
}