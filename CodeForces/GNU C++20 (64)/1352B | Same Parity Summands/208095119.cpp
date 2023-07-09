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
  if( n == k )
  {
   cout<<"YES"<<'\n';
   for (int i = 0; i < k; ++i)
   {
    cout<<1<<" ";
   }
   cout<<'\n';
   goto jump;
  }
  if( !( n & 1 ) )
  {
   if( ( n / 2 ) >= k )
   {
    cout<<"YES"<<'\n';
    for (int i = 0; i < k - 1; ++i)
    {
     cout<<2<<" ";
    }
    cout<< ( ( (n / 2) - ( k - 1 ) ) * 2 ) <<'\n';
    goto jump;
   }
   else
   {
    if( ( ( n - (k - 1)  ) & 1 ) && ( n - (k - 1)  ) > 0 )
    {
     cout<<"YES"<<'\n';
     for (int i = 0; i < k - 1; ++i)
     {
      cout<<1<<" ";
     }
     cout<<( n - (k - 1)  )<<'\n';
     goto jump;
    }
    else
    {
     cout<<"NO"<<'\n';
     goto jump;
    }
   }
  }
  else
  {
   if( !(k & 1) || ( k > n ) )
   {
    cout<<"NO"<<'\n';
    goto jump;
   }
   else
   {
    cout<<"YES"<<'\n';
    for (int i = 0; i < k - 1; ++i)
    {
     cout<<1<<" ";
    }
    cout<<( n - (k - 1) )<<'\n';
    goto jump;
   }
 
  }
  jump:;
 }
 return 0;
}