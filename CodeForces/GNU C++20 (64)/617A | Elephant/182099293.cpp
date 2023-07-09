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
    ll num;
    cin >> num;
    if( num <= 5 )
        cout<<1;
    else
        {
            if(num % 5)
                cout<<num/5 + 1;
            else
                cout<<num/5;
        }
    //code
    return 0;
}