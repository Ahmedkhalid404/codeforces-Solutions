/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))
#define ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define what_is(x) cerr << #x << " is " << x << " ";
//#define ONPC
using namespace std;
int main() {
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
    map<char,ll>freq;
    ll k;
    string s;
    cin >> s >> k;
    if( k > s.size() )
        return cout<<"impossible",0;
    for (int i = 0; i < s.size(); ++i) {
        freq[ s[i] ] = 1;
    }
    if(k < freq.size())
        return cout<<0,0;
    cout<<k-(freq.size());
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}