#include <bits/stdc++.h>
using namespace std;
#define Hakuna_Matata()          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
int main()
{
#ifndef ONLINE_JUDGE
 freopen("outputFile.txt","w",stdout);
 freopen("inputFile.txt","r",stdin);
#endif
 Hakuna_Matata();
 ll tt;
 cin >> tt;
 while( tt-- )
 {
  ll size , k; cin >> size >> k;
  vector< pair< ll , ll > >a( size );
  vector< ll >b( size ),ans( size );
  for (int i = 0; i < size; ++i)
  {
   cin >> a[i].first;
   a[i].second = i;
  }
  for (int i = 0; i < size; ++i)
  {
   cin >> b[i];
  }
  sort( a.begin() , a.end() );
  sort( b.begin() , b.end() );
  for (int i = 0; i <  size; ++i)
  {
   ans[ a[i].second ] = b[i];
  }
 
  for(auto it : ans) cout<<it<<" ";
 
  cout<<ln;
 }
 return  0;
}