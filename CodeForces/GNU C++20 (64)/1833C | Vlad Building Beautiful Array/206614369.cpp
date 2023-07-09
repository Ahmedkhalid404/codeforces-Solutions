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
  ll size;
  cin >> size;
  vector< ll >numbers(size);
  for (int i = 0; i < size; ++i)
  {
   cin >> numbers[i];
  }
  sort( numbers.begin() , numbers.end() );
  if( numbers.front() & 1 )
  {
   cout<<"YES"<<ln;
   goto jump;
  }
  for (int i = 1; i < size; ++i)
  {
   if( numbers[i] & 1 )
   {
    cout<<"NO"<<ln;
    goto jump;
   }
  }
  cout<<"YES"<<ln;
  jump:;
 }
 return  0;
}