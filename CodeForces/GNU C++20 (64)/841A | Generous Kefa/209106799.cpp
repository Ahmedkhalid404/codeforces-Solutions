#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size , k;
    cin >> size >> k;
    string s;
    cin >> s;
    map< char , ll >freq;
    for (int i = 0; i < size; ++i) {
        freq[ s[i] ]++;
    }
    ll share  = size / k;
    for(auto it : freq)
    {
        if( it.second > k )
            return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}