#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
    ll size;
    cin >> size;
    vector< ll >numbers( size );
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    sort( numbers.begin() , numbers.end() );
    ll res = size - 1;
    for (int i = 0; i < size - 1; ++i) {
        ll st = i + 1;
        ll ed = size - 1;
        ll md , ans = -1;
        while( st <= ed ) {
            md = (st + ed) / 2;
            if (numbers[i] * 2 >= numbers[md]){
                ans = md;
                st = md + 1;
            }
            else
            {
                ed = md - 1;
            }
        }
        if( ~ans )
        {
            res = (ll)min( res , (size - ans - 1) + i );
 
        }
    }
    cout<<res;
    return 0;
}