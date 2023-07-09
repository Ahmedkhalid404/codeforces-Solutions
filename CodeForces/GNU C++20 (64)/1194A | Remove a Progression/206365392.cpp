#include<bits/stdc++.h>
using namespace std;
typedef long long               ll;  
#define ln                      '\n'
int main()
{
#ifndef ONLINE_JUDGE
    freopen("outputFile.txt","w",stdout);
    freopen("inputFile.txt","r",stdin);
#endif
    ll tt;
    cin >> tt;
    while( tt-- ){
        ll n , x;
        cin >> n >> x;
        cout<< x * 2<<ln;
    }
    return  0;
}