#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
 
 
 
int main() {
    HelloWorld('-');
 
    ll tt;
    cin >> tt;
    while( tt-- )
    {
        ll n , m;
        cin >> n >> m;
        vector< vector<ll> >graph(n + 1);
        for (int i = 0; i < m; ++i) {
            ll u , v;
            cin >> u >> v;
            graph[u].push_back( v );
            graph[v].push_back( u );
        }
        for (int i = 1; i <= n; ++i) {
            if( graph[i].size() )
            {
                ll res = graph[ graph[i][0] ].size();
                ll sz = graph[i].size();
                for(int j = 0; j < sz ; j++)
                {
                    if( graph[ graph[i][j] ].size() != res )
                        goto jump;
                }
//                cout<<i<<" "<<graph[i].size()<<" "<<graph[ graph[i][0] ].size()<<ln;
                if( ( graph[i].size() * (graph[ graph[i][0] ].size() - 1)) + graph[i].size() + 1 == n )
                {
                    cout<<graph[i].size()<<" "<<graph[ graph[i][0] ].size() - 1<<ln;
                    goto finish;
 
                }
            }
            jump:;
        }
        finish:;
    }
 
    return 0;
}