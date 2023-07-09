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
#define  ln endl
#define MAX 500
#define tryIt() ll testCases = (x); cin >> testCases; test while(testCases--)
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
    ll size,moeny,sum=0,count = 0;
    cin >> size >> moeny;
    vector<ll>numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    ll start = 0;
    ll end = size;
    ll middle,ans = -1;
    while(start <= end)
    {
        middle = (start+end)/2;
        vector<ll>newSallary(size);
        for (int i = 0; i < size; ++i) {
            newSallary[i] = numbers[i] + (middle * (i+1));
        }
        Sort(newSallary);
        sum = 0;
        for (int i = 0; i < middle; ++i) {
            sum += newSallary[i];
        }
        if( sum <= moeny )
        {
            if(sum > count)
                count = sum;
            ans = middle;
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
 
    }
    cout<<ans<<" "<<count;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************