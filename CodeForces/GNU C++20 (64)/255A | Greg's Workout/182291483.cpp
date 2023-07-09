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
    int chest=0,biceps=0,back=0;
    ll size;
    cin >> size;
    for (int i = 1; i <= size; ++i) {
        ll num;
        cin >> num;
        if( i % 3 == 1 )
        {
            chest += num;
        }
        else if( i % 3 == 2 )
        {
            biceps += num;
        }
        else
        {
            back += num;
        }
    }
    if( chest > biceps && chest > back )
    {
        cout<<"chest";
    }
    else if( chest < biceps && biceps > back )
    {
        cout<<"biceps";
    }
    else if( back > biceps && chest < back )
    {
        cout<<"back";
    }
    else
    {
        cout<<"unambiguous";
    }
    //code
    return 0;
}