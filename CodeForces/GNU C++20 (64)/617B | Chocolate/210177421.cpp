#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    vector< ll >numbers( size );
    ll firstOne = -1;
    ll lastOne  = -1;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        if( numbers[i] )
        {
            if( firstOne == -1 )
                firstOne = i;
            lastOne = i;
        }
    }
    if( firstOne == -1 && lastOne == -1 )
        return cout<<0,0;
    ll res = 1;
    for (int i = firstOne; i <= lastOne; ++i) {
        if( numbers[i] == 1 )
        {
            int j = i + 1;
            ll cnt = 1;
            for (; j <= lastOne; ++j) {
                if( numbers[j] )
                    break;
                cnt++;
            }
            res *= cnt;
            i = j - 1;
        }
    }
    cout<<res;
    return 0;
}