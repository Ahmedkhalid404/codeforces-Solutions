/*
 *  author:  Ahmed khaled
 * */
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
#define tryIt(x) ll testCases = (x); while((testCases)--)
#define loop(a,b) for(int i(a);i<=(b);i++)
#define loopRev(a,b) for(int i(a);i>=(b);i--)
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
//****************************************    prototypes    ****************************************
int main() {
    fraction(1);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
    //****************    code    ************************
    ll size;
    cin >> size;
    vector<int>numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    Sort(numbers);
    for(int i= 0,j=1;i<numbers.size();i++,j++)
    {
        if(j != numbers[i])
        {
            cout<<j;
            return 0;
        }
    }
    cout<<numbers[ numbers.size()-1 ] + 1;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************