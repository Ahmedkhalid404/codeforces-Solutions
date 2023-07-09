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
        vector< ll >numbers( size );
        for (int i = 0; i < size; ++i) {
            cin >> numbers[i];
        }
        sort( numbers.begin() , numbers.end() );
        for (int i = size - 1; i > -1; --i) {
            if( numbers[i] > 0 )
            {
                ll curr = numbers[i] - 1;
                numbers[i] = -1;
                for (int j = i - 1; j > -1; --j) {
                    if( curr == -1 )
                        goto jump;
                    if( numbers[j] == curr )
                    {
                        curr--;
                        numbers[j] = -1;
                    }
                }
                if( curr > -1 )
                {
                    cout<<"NO"<<'\n';
                    goto finCase;
                }
                jump:;
            }
        }
        cout<<"YES"<<'\n';
        finCase:;
    }
    return 0;
}