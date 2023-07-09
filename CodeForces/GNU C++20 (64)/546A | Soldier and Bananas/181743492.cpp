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
    fraction(9);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //code
    ll k,moeny,bananas;
    ll allMoeny=0;
    cin>>k>>moeny>>bananas;
    for(int i=1;i<=bananas;i++)
        {
            allMoeny = allMoeny + (k * i);
        }
    if(allMoeny > moeny)
        cout<<allMoeny - moeny;
    else
        cout<<0;
    //code
    return 0;
}