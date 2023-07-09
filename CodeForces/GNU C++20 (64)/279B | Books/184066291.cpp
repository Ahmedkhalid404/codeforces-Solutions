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
    vector<ll>book;
    vector<ll>prefix;
    ll size,time,count=0,maxBook=0,sum=0;
    cin >> size >> time;
    prefix.resize(size);
    book.resize(size);
    vector<ll>suffix(size, 0);
    for (int i = 0; i < size; ++i) {
        cin >> book[i];
        sum += book[i];
        prefix[i]=sum;
    }
    if(prefix[size-1] <= time)
    {
        cout<<size;
        return 0;
    }
    ll num = 0;
    for (int i = 0; i < size; ++i) {
            if(i > 0 )
            {
                num += book[i-1];
            }
            ll start = i;
            ll end = size-1;
            ll middle,ans = -1;
            while( start <= end )
            {
                middle = (start + end)/2;
                if( prefix[middle]-num <= time )
                {
                    ans = middle;
                    start = middle + 1;
                }
                else
                {
                    end = middle - 1;
                }
            }
            if( ans != -1 && (ans-i+1) > maxBook )
                maxBook = ans - i + 1;
    }
    cout<<maxBook;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************