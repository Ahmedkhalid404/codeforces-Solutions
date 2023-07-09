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
  ll n , x; cin >> n >> x;
  ll low = 2 , high = low + x;
  ll floor = 2;
  if( n < 3 )
  {
   cout<<1;
   goto jump;
  }
  while( true )
  {
   if( (n >= low + 1) && (n <= high) )
   {
    cout<<floor;
    goto jump;
   }
   low = high;
   high = low + x;
   floor++;
  }
  jump:;
  cout<<'\n';
 }
 return 0;
}