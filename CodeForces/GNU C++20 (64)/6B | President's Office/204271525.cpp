#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main() {
    HelloWorld('-');
    ll n , m;
    char ch;
    cin >> n >> m >> ch;
    char arr[n][m];
    vector< pair< ll , ll > > presidentOffice;
    set< char >result;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            if( arr[i][j] == ch )
            {
                presidentOffice.push_back( { i , j } );
                //cout<<i<<" "<<j<<ln;
            }
        }
    }
    //cout<<"-------------------------"<<ln;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if( arr[i][j] != '.' && arr[i][j] != ch)
            {
                ll sz = presidentOffice.size();
                //cout<<i<<" "<<j<<ln;
                for (int k = 0; k < sz; ++k) {
                    if( i == presidentOffice[k].first )
                    {
                        //cout<<arr[i][j]<<" added"<<ln;
                            if( abs(  j - presidentOffice[k].second  ) == 1 )
                            {
                                result.insert( arr[i][j] );
                                break;
                            }
 
                    }
                    if( j == presidentOffice[k].second )
                    {
                        if( abs( i - presidentOffice[k].first ) == 1 )
                        {
                            result.insert( arr[i][j] );
                            break;
                        }
                    }
                }
            }
        }
    }
//    for(auto it : result)
//        cout<<it<<" ";
//    cout<<ln;
    //cout<<"----------------"<<ln;
    cout<<result.size();
    return 0;
}