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
 ll tt; cin >> tt;
 while( tt-- )
 {
  ll x , k , y = 1;
  cin >> x >> k;
  if( x % k )
  {
   cout<<1<<'\n'<<x<<'\n';
   goto finishCase;
  }
  
  x --;
  while( true )
  {
   if( (x % k) && (y % k) )
   {
    cout<<2<<'\n'<<x<<" "<<y<<'\n';
    goto finishCase;
   }
   x-- , y++;
  }
  finishCase:;
 }
 return 0;
}