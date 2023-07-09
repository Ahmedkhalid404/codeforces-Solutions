#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
#ifndef ONLINE_JUDGE
 freopen("outputFile.txt","w",stdout);
 freopen("inputFile.txt","r",stdin);
#endif
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll tt;
 cin >> tt;
 while( tt-- )
 {
  ll n , k;
  cin >> n >> k;
  cout<< ( k + ( (k - 1) / ( n - 1) ) );
  cout<<'\n';
 }
 return 0;
}