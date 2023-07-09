#include <bits/stdc++.h>
using namespace std;
#define Hakuna_Matata()          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
 
bool isPrime(ll n)
{
 if( n < 1 )
  return false;
 for (int i = 2; i * i <= n; ++i)
 {
  if( !(n % i) )
   return false;
 }
 return true;
}
 
int main()
{
#ifndef ONLINE_JUDGE
 freopen("outputFile.txt","w",stdout);
 freopen("inputFile.txt","r",stdin);
#endif
 Hakuna_Matata();
 ll n;
 cin >> n;
 for (int i = 1; i <= 1000; ++i)
 {
  if( !isPrime( n * i + 1 ) )
   return cout<<i,0;
 }
 return  0;
}