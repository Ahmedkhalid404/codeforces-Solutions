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
    ll size;
    cin >> size;
    vector<ll>numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    if(size <= 2)
    {
        cout<<size;
        return 0;
    }
    ll maxNum = 1;
    for (int i = 0; i < size; ++i) {
        ll count = 1;
        for (int j = i; j < size-1; ++j) {
            if(numbers[j] >= numbers[j+1])
                count++;
            else
                break;
        }
        for (int j = i; j > 0; --j) {
                if(numbers[j] >= numbers[j-1])
                    count++;
                else
                    break;
        }
        if(count > maxNum)
            maxNum = count;
    }
    cout<<maxNum;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************