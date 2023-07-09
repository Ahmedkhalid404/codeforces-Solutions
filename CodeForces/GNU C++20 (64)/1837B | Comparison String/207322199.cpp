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
  ll size ; cin >> size;
  string s; cin >> s;
  set<int>res;
  ll currentNum = 0;
  res.insert( currentNum );
 
  for (int i = 0; i < size; ++i)
  {
   if( i == size - 1 )
   {
    if( s[i] == '<' )
    {
     for(auto it : res)
     {
      if( currentNum < it )
      {
       goto semiFinish;
      }
     }
    }
    else //if( s[i] == '>' )
    {
     for(auto it : res)
     {
      if( currentNum > it )
      {
       goto semiFinish;
      }
     }
    }
    currentNum = 1500;
   }
   else
   {
    if( s[i] == '<' )
    {
     if( s[i + 1] == '<' )
     {
      for(auto it = res.begin();it != res.end();it++)
      {
       if( currentNum < *it )
       {
        currentNum = *it;
        goto semiFinish;
       }
      }
     }
     else if( s[i + 1] == '>' )
     {
      for(auto it = res.rbegin();it != res.rend();it++)
      {
       if( currentNum < *it )
       {
        currentNum = *it;
        goto semiFinish;
       }
      }
     }
     currentNum++;
     goto jump;
    }
    else //if(s[i] == '>')
    {
     if( s[i + 1] == '>' )
     {
      for(auto it = res.rbegin();it != res.rend();it++)
      {
       if( currentNum > *it )
       {
        currentNum = *it;
        goto semiFinish;
       }
      }
     }
     else if( s[i + 1] == '<' )
     {
      for(auto it = res.begin();it != res.end();it++)
      {
       if( currentNum > *it )
       {
        currentNum = *it;
        goto semiFinish;
       }
      }
     }
     currentNum--;
     goto jump;
    }
   }
 
   jump:;
   res.insert( currentNum );
   semiFinish:;
  }
  cout<<res.size()<<'\n';
 }
 return 0;
}