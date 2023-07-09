/*
 *  author:  Ahmed khaled
 * */
#import <bits/stdc++.h>
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
    ll size,pos,count = 0;
    cin >> size >> pos;
    vector<ll>cities(size);
    pos--;
    for (int i = 0; i < size; ++i) {
        cin >> cities[i];
        if( i == pos  && cities[i] == 1)
            {
                count++;
            }
    }
    int i = pos-1;
    int j = pos+1;
    while( i != -1 && j != size)
        {
            if( cities[i] == 1 && cities[j] == 1 )
                count += 2;
            i--;
            j++;
 
        }
    if(i < 0)
    {
        while( j <= size-1 )
        {
            if( cities[j] == 1 )
                count++;
            j++;
        }
    }
    else if(j > size-1)
    {
        while( i >= 0 )
        {
            if( cities[i] == 1 )
                count++;
            i--;
        }
    }
    cout<<count;
 
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************