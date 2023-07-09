#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll arr[3][3];
    ll mx = -1;
    ll mainDiagonal = 0,secDiagonal = 0;
    vector< ll >rows(3);
    for (int i = 0; i < 3; ++i) {
        ll row = 0;
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
            row += arr[i][j];
            if( i == j )
                mainDiagonal += arr[i][j];
            if( i + j == 2 )
                secDiagonal += arr[i][j];
        }
        rows[i] = row;
        mx = (ll)max( mx , row );
    }
    mx = (ll) max({mx , mainDiagonal , secDiagonal});
    for (int i = 0; i < 3; ++i) {
        ll col = 0;
        for (int j = 0; j < 3; ++j) {
            col += arr[j][i];
        }
        mx = (ll)max( mx , col );
    }
    mx++;
    while( true )
    {
        ll sum = 0;
        for (int i = 0 , j = 0; i < 3; ++i,j++) {
            arr[i][j] = mx - rows[i];
            sum += arr[i][j];
        }
        if( (sum == mx) && ( secDiagonal + arr[1][1] == mx  ) )
            break;
        mx ++;
    }
 
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}