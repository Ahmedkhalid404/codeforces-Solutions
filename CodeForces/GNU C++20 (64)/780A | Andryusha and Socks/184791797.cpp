/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled
 *
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
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
//****************************************    prototypes    ****************************************
//bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
    //freopen("IO_file.txt","w",stdout);//to output in 'IO_file.txt' file
    //freopen("IO_file.txt","r",stdin);//to read from 'IO_file.txt' file
    //****************    code    ************************
    set<ll>socks;
    ll size;
    cin >> size;
    size *= 2;
    ll count = 0;
    for (int i = 0; i < size; ++i) {
        ll num;
        cin >> num ;
        if( socks.count(num) == 1 )
        {
            socks.erase(num);
        }
        else
            socks.insert( num );
 
        if( socks.size() > count )
        {
            count = socks.size();
        }
    }
    cout<<count;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
//**********************   to sort with second number    **********************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}