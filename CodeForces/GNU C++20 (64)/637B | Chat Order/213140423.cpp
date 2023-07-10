#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    deque<string>names(size);
    map< string , bool >freq;
    for (int i = 0; i < size; ++i) {
        cin >> names[i];
    }
    for (int i = size - 1; ~i ; --i) {
        if( !freq[ names[i] ] )
            cout<<names[i]<<'\n' , freq[ names[i] ] = (1 ^ 0);
    }
    return 0;
}