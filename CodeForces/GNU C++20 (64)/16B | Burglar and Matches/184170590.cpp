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
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
    //****************    code    ************************
    ll burglar,size,count = 0;
    cin >> burglar >> size;
    deque< pair<ll,ll> >numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i].second >> numbers[i].first;
    }
    sort( numbers.rbegin(),numbers.rend() );
    int i = 0;
    while(true)
    {
        if(!burglar || i == size)
            break;
        if( burglar >= numbers[i].second )
        {
            count = count + numbers[i].first*numbers[i].second;
            burglar -= numbers[i].second;
        }
        else
        {
            count = count + numbers[i].first * burglar;
            burglar = 0;
            break;
        }
        i++;
    }
    cout<<count;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************