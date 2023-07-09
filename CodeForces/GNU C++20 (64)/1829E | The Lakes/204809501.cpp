#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
ll arr[1005][1005];
bool isVisited[ 1005 ][ 1005 ];
ll n , m ;
ll sum = 0;
void dfs(int i,int j)
{
    isVisited[i][j] = true;
    sum += arr[i][j];
    if( ( i + 1 < n ) && (arr[i + 1][j] != 0) && (!isVisited[i+1][j]) )
    {
        dfs( i+1,j );
    }
    if( ( i - 1 > -1 ) && (arr[i - 1][j] != 0) && (!isVisited[i-1][j]) )
    {
        dfs( i-1,j );
    }
    //-------------------
    if( ( j + 1 < m ) && (arr[i][j+1] != 0) && (!isVisited[i][j+1]) )
    {
        dfs( i,j+1 );
    }
    if( ( j - 1 > -1 ) && (arr[i][j-1] != 0) && (!isVisited[i][j-1]) )
    {
        dfs( i,j-1 );
    }
}
 
int main() {
    HelloWorld('-');
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                isVisited[i][j] = false;
            }
        }
        ll mx = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if( ( arr[i][j] != 0 ) && ( !isVisited[i][j] ) )
                {
                    sum = 0;
                    dfs( i , j );
                    mx = (ll)max(mx,sum);
                }
            }
        }
        cout<<mx<<ln;
    }
    return 0;
}