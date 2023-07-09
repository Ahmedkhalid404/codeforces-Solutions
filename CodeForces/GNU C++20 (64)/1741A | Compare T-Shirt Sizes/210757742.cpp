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
        string s1 , s2;
        cin >> s1 >> s2;
        map< char , ll >size = { {'S' , 0} , { 'M' , 1 } , {'L' , 2} };
        if( size[ s1.back() ] > size[ s2.back() ] )
        {
            cout<<">\n";
            continue;
        }
        else if( size[ s1.back() ] < size[ s2.back() ] )
        {
            cout<<"<\n";
            continue;
        }
        else
        {
            if( s1.back() == 'S' )
            {
                if( s1.size() < s2.size() )
                {
                    cout<<">\n";
                    continue;
                }
                else if( s1.size() > s2.size() )
                {
                    cout<<"<\n";
                    continue;
                }
                else
                {
                    cout<<"=\n";
                    continue;
                }
            }
            if( s1.size() > s2.size() )
            {
                cout<<">\n";
                continue;
            }
            else if( s1.size() < s2.size() )
            {
                cout<<"<\n";
                continue;
            }
            else
            {
                cout<<"=\n";
                continue;
            }
        }
    }
    return 0;
}