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
  string s; cin >> s;
  ll ans = 0;
  string res = "";
  ll zeros = 0;
  ll size = s.size();
  for (int i = size - 1; i > -1; --i)
  {
   if( s[i] != '0' )
   {
    ans++;
    res.push_back( s[i] );
    for (int j = 0; j < zeros; ++j)
    {
     res.push_back( '0' );
    }
    res.push_back(' ');
   }
   zeros++;
  }
  cout<<ans<<'\n';
  cout<<res<<'\n';
 }
 return 0;
}