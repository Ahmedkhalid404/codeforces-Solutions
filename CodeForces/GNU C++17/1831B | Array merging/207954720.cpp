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
        vector<ll>n1(size),n2(size);
        map<ll,ll>freq1,freq2;
        for (int i = 0; i < size; ++i) {
            cin >> n1[i];
            freq1[ n1[i] ] = 1;
        }
        for (int i = 0; i < size; ++i) {
            cin >> n2[i];
            freq2[ n2[i] ] = 1;
        }
        for (int i = 0; i < size - 1; ++i) {
            if( n1[i] == n1[ i + 1 ] )
            {
                ll cnt = 1;
                ll num = n1[i];
                bool flag = false;
                for (int j = i + 1; j < size; ++j) {
                    if( n1[i] != n1[j] )
                    {
                        flag = true;
                        i = j - 1;
                        break;
                    }
                    cnt++;
                }
                freq1[ num ] = (ll)max( freq1[ num ] , cnt );
                if( !flag )
                    break;
            }
        }
        for (int i = 0; i < size - 1; ++i) {
            if( n2[i] == n2[ i + 1 ] )
            {
                ll cnt = 1;
                ll num = n2[i];
                bool flag = false;
                for (int j = i + 1; j < size; ++j) {
                    if( n2[i] != n2[j] )
                    {
                        flag = true;
                        i = j - 1;
                        break;
                    }
                    cnt++;
                }
                freq2[ num ] = (ll)max( freq2[ num ] , cnt );
                if( !flag )
                    break;
            }
        }
        ll mx = -1;
        for(auto it : freq1)
        {
            mx = (ll)max( mx , it.second + freq2[ it.first ] );
        }
        for(auto it : freq2)
        {
            mx = (ll)max( mx , it.second + freq1[ it.first ] );
        }
        cout<<mx<<'\n';
    }
    return 0;
}