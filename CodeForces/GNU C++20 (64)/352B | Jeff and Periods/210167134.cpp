#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
struct repeatNum{
    int  isFirstOrSecTime = 1;
    ll   lastIdx;
    ll   diff;
};
 
struct solve{
    bool isValid = true;
};
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll size;
    cin >> size;
    vector< ll >numbers( size );
    map< ll , repeatNum >freq;
    map< ll , solve >f;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
        if( freq[ numbers[i] ].isFirstOrSecTime == 1 ){
            freq[ numbers[i] ].isFirstOrSecTime = 2;
            freq[ numbers[i] ].lastIdx = i + 1;
        }
        else if( freq[ numbers[i] ].isFirstOrSecTime == 2 ){
            freq[ numbers[i] ].isFirstOrSecTime = 3;
            freq[ numbers[i] ].diff = (i + 1) - freq[ numbers[i] ].lastIdx;
            freq[ numbers[i] ].lastIdx = i + 1;
        }
        else if( f[ numbers[i] ].isValid )
        {
            ll diff = (i + 1) - freq[ numbers[i] ].lastIdx;
            freq[ numbers[i] ].lastIdx = i + 1;
            if( diff != freq[ numbers[i] ].diff )
            {
                f[ numbers[i] ].isValid = false;
            }
        }
    }
    vector< pair<ll,ll> >res;
    for(auto it : freq)
    {
        if( f[ it.first ].isValid )
        {
            if( freq[ it.first ].isFirstOrSecTime == 1 )
            {
                res.push_back( { it.first , 0 } );
            }
            else
            {
                res.push_back( { it.first , freq[ it.first ].diff } );
            }
        }
    }
    cout<<res.size()<<'\n';
    for(auto it : res) cout<<it.first<<" "<<it.second<<'\n';
    return 0;
}