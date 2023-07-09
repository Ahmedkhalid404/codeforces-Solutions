#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n , m;
vector< vector< ll > >graph;
vector< bool >isVisited;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    graph.resize( n + 1 );
    isVisited.resize( n + 1 );
    for (int i = 0; i < m; ++i) {
        ll u , v;
        cin >> u >> v;
        graph[ u ].push_back( v );
        graph[ v ].push_back( u );
    }
    ll two = 0;
    ll one = 0;
    ll size = 0;
    for(int i = 1;i <= n ; i++)
    {
        ll sz = graph[i].size();
        if( sz == 1 )
            one++;
        else if( sz == 2 )
            two++;
        else if( sz == n - 1 )
            size++;
        else
        {
            return cout<<"unknown topology",0;
        }
    }
    //cout<<one<<' '<<two<<' '<<size<<'\n';
    if( ( one == 2 ) && (two == n - 2) )
        cout<<"bus topology";
    else if( two == n  )
        cout<<"ring topology";
    else if( ( size == 1 ) && ( one == n - 1 ) )
        cout<<"star topology";
    else
        cout<<"unknown topology";
    return 0;
}