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
#define  ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define what_is(x) cerr << #x << " is " << x << endl;
using namespace std;
 
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
void printN(ll n ,char c);
int main() {
    fraction(6);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
    string s = "ROYGBIVG";
        ll num;
        cin >> num;
        cout<<s[0]<<s[1]<<s[2]<<s[3];
        num -= 4;
    for (int i = 0; i < num; ++i) {
            cout<<s[i%4+4];
    }
        return 0;
 
}
 
//****************************************    helping function    ****************************************
void printN(ll n ,char c){
    for (int i = 0; i < n; ++i) {
        cout<<c<<" ";
    }
}
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
//BIVG BIVG