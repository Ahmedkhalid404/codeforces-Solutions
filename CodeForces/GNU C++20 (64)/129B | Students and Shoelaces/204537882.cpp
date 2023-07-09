#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
ll n , m;
vector< set< ll > >graph;
bool isVisited[ 105 ];
 
int main() {
    HelloWorld('-');
    cin >> n >> m;
    graph.resize( n + 1 );
    for (int i = 0; i < m; ++i) {
        ll u , v;
        cin >> u >> v;
        graph[ u ].insert( v );
        graph[ v ].insert( u );
    }
    ll ans = 0;
    while( true )
    {
        vector< ll >del;
        for (int i = 1; i <= n; ++i) {
            if( !isVisited[i] && graph[i].size() == 1 )
                del.push_back( i );
        }
        if( !del.size() )
            break;
        ll sz = del.size();
        ans ++;
        for (int i = 0; i < sz; ++i) {
            if( !isVisited[ del[i] ] )
            {
                isVisited[ del[i] ] = true;
                for(auto it : graph[ del[i] ])
                {
                    graph[ it ].erase( del[i] );
                }
            }
        }
    }
    cout<<ans;
    return 0;
}