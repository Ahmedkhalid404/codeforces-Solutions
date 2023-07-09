#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main() {
    fraction(1);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    int a,b,c;
    cin>> a >> b >> c ;
    if( a > b ) swap(a,b);
    if( a > c ) swap(a,c);
    if( b > c ) swap(b,c);
    cout<< ( b - a ) + ( c - b ) ;
    //code
    return 0;
}