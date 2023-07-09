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
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
    //****************    code    ************************
    ll row,coul;
    cin >> row >> coul;
    char arr[row][coul];
    char ch,chR;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < coul; ++j) {
            cin>>arr[i][j];
            if(j==0)
            {
                ch = arr[i][j];
            }
            else
            {
                if( ch != arr[i][j] )
                {
                    No;
                    return 0;
                }
            }
        }
        if(i == 0)
        {
            chR = arr[i][0];
        }
        else
        {
            if( arr[i][0] == chR )
            {
                No;
                return 0;
            }
            else
                chR = arr[i][0];
        }
    }
    Yes;
 
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
bool sortbysecdesc(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}