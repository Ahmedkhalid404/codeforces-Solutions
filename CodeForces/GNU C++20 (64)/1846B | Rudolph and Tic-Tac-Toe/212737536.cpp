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
        ll r = 3 , c = 3;
        char Tic_Tac_Toe[r][c];
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> Tic_Tac_Toe[i][j];
            }
        }
        for (int i = 0; i < r; ++i) {
            if( Tic_Tac_Toe[i][0] == '.' )
                continue;
            for (int j = 1; j < c; ++j) {
                if( Tic_Tac_Toe[i][0] != Tic_Tac_Toe[i][j] )
                    goto jump;
            }
            cout<<Tic_Tac_Toe[i][0]<<'\n';
            goto finish;
            jump:;
        }
        for (int i = 0; i < r; ++i) {
            if( Tic_Tac_Toe[0][i] == '.' )
                continue;
            for (int j = 1; j < c; ++j) {
                if( Tic_Tac_Toe[0][i] != Tic_Tac_Toe[j][i] )
                    goto jump2;
            }
            cout<<Tic_Tac_Toe[0][i]<<'\n';
            goto finish;
            jump2:;
        }
        if( ( Tic_Tac_Toe[0][0] == Tic_Tac_Toe[1][1] && Tic_Tac_Toe[0][0] == Tic_Tac_Toe[2][2] && Tic_Tac_Toe[0][0] != '.' ) )
        {
            cout<<Tic_Tac_Toe[0][0]<<'\n';
            goto finish;
        }
        if( ( Tic_Tac_Toe[0][2] == Tic_Tac_Toe[1][1] && Tic_Tac_Toe[0][2] == Tic_Tac_Toe[2][0] && Tic_Tac_Toe[0][2] != '.') )
        {
            cout<<Tic_Tac_Toe[0][2]<<'\n';
            goto finish;
        }
        cout<<"DRAW\n";
        finish:;
    }
    return 0;
}