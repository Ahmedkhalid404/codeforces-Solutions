#include <bits/stdc++.h>
using namespace std;
#define ln                      '\n'
typedef long long               ll;
 
auto There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not /* :) */() {
    ll n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    char dia = arr[0][0];
    char notDia = arr[0][1];
    if( dia == notDia )
        return void(cout<<"NO");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if( (i == j) || (i + j == n - 1) )
            {
                if( arr[i][j] != dia )
                    return void(cout<<"NO");
            }
            else
            {
                if( arr[i][j] != notDia )
                    return void(cout<<"NO");
            }
        }
    }
    cout<<"YES";
 
}
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cout<< fixed <<showpoint <<setprecision(7);
#ifndef ONLINE_JUDGE
    freopen ("outputFile.txt","w",stdout);
    freopen ("inputFile.txt","r",stdin);
#endif
    ll tt = 1;
    //cin >> tt;
    while(tt--)
    {
        There_are_10_types_of_people_in_the_world_those_who_understand_binary_and_those_who_do_not();
        cout<<ln;
    }
    return 0;
}