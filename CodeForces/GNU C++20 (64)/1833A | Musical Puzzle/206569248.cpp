#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
 
 
int main()
{
#ifndef ONLINE_JUDGE
 freopen("outputFile.txt","w",stdout);
 freopen("inputFile.txt","r",stdin);
#endif
 HelloWorld('♡');
 ll tt;
 cin >> tt;
 while( tt-- )
 {
  ll size;
  cin >> size;
  string s;
  cin >> s;
  set< string >res;
  for (int i = 0; i < size - 1; ++i)
  {
   string subStr = "";
   subStr.push_back( s[i] );
   subStr.push_back( s[i + 1] );
   res.insert( subStr );
  }
  cout<<res.size()<<ln;
 }
 
 return  0;
}