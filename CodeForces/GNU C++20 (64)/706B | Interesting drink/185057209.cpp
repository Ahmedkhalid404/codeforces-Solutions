/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled
 *
 * */
#include <bits/stdc++.h>
#include <conio.h>
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
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
//****************************************    prototypes    ****************************************
//bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
void InterestingDrink();
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
//#ifdef ONPC
    //freopen("IO_file.txt","r",stdin);//to read from 'IO_file.txt' file
//#endif
    //freopen("IO_file.txt","w",stdout);//to output in 'IO_file.txt' file
    //****************    code    ************************
    InterestingDrink();
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
//**********************   to sort with second number    **********************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
//********************************************************************************
void InterestingDrink() {
    ll size, query;
    cin >> size;
    vector<ll> numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cin >> query;
    Sort(numbers);
    while (query--)
    {
        ll key ;
        cin >> key ;
        if(key < numbers[0])
        {
            cout<<0<<ln;
            continue;
        }
        if( key >= numbers[ size - 1 ] )
        {
            cout<<size<<ln;
            continue;
        }
        ll start = 0;
        ll end = size-1;
        ll middle,ans=-1;
        while( start <= end )
        {
            middle = (start + end) / 2;
            if( numbers[middle] <= key )
            {
                ans = middle;
                start = middle + 1;
            }
            else
            {
                end = middle - 1 ;
            }
        }
        cout<<ans+1<<ln;
    }
}