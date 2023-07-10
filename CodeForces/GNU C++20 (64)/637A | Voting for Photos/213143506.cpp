#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    map< ll , ll >freq;
    pair< ll , ll >mx = {-1,-1};
    ll num;
    for (int i = 0; i < size; ++i) {
        cin >> num;
        freq[ num ]++;
        if( freq[ num ] > mx.second )
        {
            mx = { num , freq[num] };
        }
    }
    cout<<mx.first;
    return 0;
}