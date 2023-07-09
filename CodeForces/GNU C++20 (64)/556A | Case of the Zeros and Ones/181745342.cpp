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
    ll size;
    cin>>size;
    ll arr[2]={0};
    string zerosAndOnes;
    cin>>zerosAndOnes;
    for (int i = 0; i < zerosAndOnes.size(); ++i) {
        arr[ zerosAndOnes[i] - '0' ]++;
    }
    cout<< abs( arr[0] - arr[1] );
    //code
    return 0;
}