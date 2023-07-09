#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll nodes , m , cnt = 0 , mx = 1;
vector< vector< ll > >graph;
vector< bool >isVisited;
 
void dfs(ll src){
    isVisited[ src ] = true;
    cnt++;
    for(auto it : graph[src])
        if( !isVisited[ it ] )
            dfs( it );
}
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> nodes >> m;
    graph = vector< vector< ll > >( nodes + 1 );
    isVisited = vector< bool >( nodes + 1 ,false);
    for (int i = 0; i < m; ++i) {
        ll u , v;
        cin >> u >> v;
        graph[ u ].push_back( v );
        graph[ v ].push_back( u );
    }
    for (int i = 1; i <= nodes; ++i) {
        if( !isVisited[ i ] )
        {
            cnt = 0;
            dfs( i );
            mx = mx * ( !cnt ? 1 : (ll)pow( 2 , cnt - 1 ) );
        }
    }
    cout<<mx;
    return 0;
}