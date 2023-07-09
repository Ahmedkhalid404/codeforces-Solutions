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
  ll size , k ; cin >> size >> k;
  vector< ll >a( size ) , b ( size );
  for (int i = 0; i < size; ++i)
  {
   cin >> a[i];
  }
  for (int i = 0; i < size; ++i)
  {
   cin >> b[i];
  }
  sort( b.begin() , b.end() );
  vector< ll >sortA ( a );
  sort( sortA.begin() , sortA.end() );
  map< ll , deque< ll > >freq;
  for (int i = 0; i < size; ++i)
  {
   freq[ sortA[i] ].push_back( b[i] );
  }
  for (int i = 0; i < size; ++i)
  {
   cout<< freq[ a[i] ].front()<<" ";
   freq[ a[i] ].pop_front(); 
  }
  cout<<ln;
 }
 return  0;
}