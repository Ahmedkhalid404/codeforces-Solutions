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
    string result = "";
    bool flag  = false;
    ll size;
    cin >> size;
    for (int i = 0; i < size; ++i) {
        char seat1, seat2, passage, seat3, seat4;
        cin >> seat1 >> seat2 >> passage >> seat3 >> seat4;
        if (!flag) {
            if (seat1 == 'O' && seat2 == 'O') {
                flag = true;
                seat1 = '+';
                seat2 = '+';
            } else if (seat3 == 'O' && seat4 == 'O') {
                flag = true;
                seat3 = '+';
                seat4 = '+';
            }
            result = result + seat1 + seat2 + passage + seat3 + seat4 + '\n';
        } else {
            result = result + seat1 + seat2 + passage + seat3 + seat4 + '\n';
        }
    }
        if( flag )
        {
            Yes<<ln;
            cout<<result;
        }
        else
            No;
    //code
    return 0;
}