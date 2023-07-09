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
  string s; cin >> s;
  char now = '?';
  ll size = s.size();
  string res = "";
  if( count( s.begin() , s.end() , '?' ) == size )
  {
   for(int i = 0 ; i < size;i++)
   {
    cout<<1;
   }
   cout<<'\n';
   goto semiFinish;
  }
  if( s == "?" )
  {
   cout<<0<<'\n';
   goto semiFinish;
  }
 
  for (int i = size - 1; i > -1; --i)
  {
   if( s[i] == '?' )
   {
    s[i] = now;
   }
   else
   {
    now = s[i];
   }
 
  }
  for (int i = 0; i < size; ++i)
  {
   if( s[i] == '?' )
   {
    s[i] = now;
   }
   else
   {
    now = s[i];
   }
  }
  cout<<s<<'\n';
  semiFinish:;
 }
 return 0;
}