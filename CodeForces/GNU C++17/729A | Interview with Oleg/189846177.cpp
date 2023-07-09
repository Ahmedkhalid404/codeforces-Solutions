/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define fast_IO(x)          ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define fraction            cout<< fixed <<showpoint <<setprecision
#define what_is(x)          cerr << #x << " is " << x << " ";
#define PI                  3.141592653589793238462643383279
#define all(x)              x.begin(),x.end()
#define Reverse(x)          reverse(all(x))
#define Sort(x)             sort(all(x))
#define Yes                 cout<<"YES"
#define yes                 cout<<"yes"
#define No                  cout<<"NO"
#define no                  cout<<"no"
#define ln                  endl
typedef long long           ll;
 
//**prototype**//
inline void _GOM3A_(void);
//**prototype**//
 
int main() {
    _GOM3A_();
    //********** code ***************
    string s;
    ll num;
    cin >> num;
    cin >> s;
    int find = 1;
    while( find != -1 ){
        find = s.find( "ogo" );
        if( find != -1 ) {
            s[ find ] = '*';
            s[ find + 1 ] = '*';
            s[ find + 2 ] = '*';
        }
        for (int i = find+3; i < s.size(); ++i) {
            if( ( i<s.size() && i+1 <s.size() ) && (s[i] == 'g' && s[i+1] == 'o') ){
                s[i] = '-';
                s[ i+1 ] = '-';
                i++;
            }
            else
                break;
        }
    }
    for (int i = 0; i < s.size(); ++i) {
        if( s[i] != '-' )
            cout<<s[i];
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}