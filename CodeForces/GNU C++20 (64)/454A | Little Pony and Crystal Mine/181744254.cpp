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
    ll rows,D=1;
    ll halfRows;
    cin>>rows;
    halfRows = rows/2;
    for(int i=0;i<halfRows;i++)
    {
        ll stars = rows - D;
        stars /= 2;
        for(int j = 0;j<stars;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<D;j++)
        {
            cout<<"D";
        }
        for(int j = 0;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<ln;
        D += 2;
    }
    for(int i=0;i<rows;i++)
    {
        cout<<"D";
    }
    cout<<ln;
    D -= 2;
    for(int i=0;i<halfRows;i++)
    {
        ll stars = rows - D;
        stars /= 2;
        for(int j = 0;j<stars;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<D;j++)
        {
            cout<<"D";
        }
        for(int j = 0;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<ln;
        D -= 2;
    }
    //code
    return 0;
}