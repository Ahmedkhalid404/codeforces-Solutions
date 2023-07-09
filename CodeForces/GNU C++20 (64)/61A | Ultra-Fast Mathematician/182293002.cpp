#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))
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
    string s1,s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); ++i) {
        if( s1[i] == s2[i] )
            cout<<0;
        else
            cout<<1;
    }
    //code
    return 0;
}