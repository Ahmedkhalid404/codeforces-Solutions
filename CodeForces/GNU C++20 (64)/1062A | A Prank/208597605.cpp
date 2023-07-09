#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll mx = 0;
    ll size ; cin >> size;
    vector< ll >numbers( size );
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    if( size == 1 )
        return cout<<0,0;
    for (int i = 0; i < size; ++i) {
        ll semiMx = 0;
        for (int j = i; j < size; ++j) {
            if( !j )
            {
                if(  numbers[j + 1] -numbers[j] == 1 && numbers.front() == 1)
                    semiMx++;
                else
                    break;
            }
            else if ( j == size - 1 )
            {
                if( numbers[j] - numbers[j - 1] == 1 && numbers.back() == 1000 )
                    semiMx++;
                else
                    break;
            }
            else
            {
                if( ( numbers[j + 1] - numbers[j] == 1 ) && ( numbers[j] - numbers[j-1] == 1 ) )
                    semiMx++;
                else
                    break;
            }
        }
        mx = (ll)max( mx , semiMx );
    }
    cout<< ( mx == size ? mx - 1 : mx );
    return 0;
}