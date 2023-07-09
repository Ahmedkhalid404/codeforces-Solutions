/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled ( _GOM3A_ )
 *
 * */
#include <bits/stdc++.h>
#include <fcntl.h>
#include <io.h>
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
    ll size;
    cin >> size;
    deque<ll>pos,neg;
    for (size_t i = 0; i < size; ++i) {
        ll num ;
        cin >> num;
        if( num >= 0  )
            pos.push_back(num);
        else
            neg.push_back(num);
    }
    Sort(pos);
    Sort(neg);
    //**********************************************************
    if( neg.size() == 0 )
    {
        ll result = 0;
        for (int i = 0; i < pos.size(); ++i) {
            result = result + ( abs( 1 - pos[i] ) );
        }
        return cout<<result,0;
    }
    //**********************************************************
    if( pos.size() == 0 )
    {
        ll result = 0;
        for (int i = 0; i < neg.size(); ++i) {
            result = result + ( abs( 1 - abs(neg[i]) ) );
        }
        if( neg.size() & 1 )
            result += 2;
        return cout<<result,0;
    }
    //************************************************************
    if( neg.size() & 1 )
    {
        if( pos[0] == 0 )
        {
            neg.push_back(0);
            pos.pop_front();
        }
    }
    if( neg.size() & 1 )
    {
        if( neg[0] < pos[0] ){
            ll result = 0;
            result = abs( neg[0]  ) + 1;
            neg.pop_front();
            for (int i = 0; i < pos.size(); ++i) {
                result = result + ( abs( 1 - pos[i] ) );
            }
            for (int i = 0; i < neg.size(); ++i) {
                result = result + ( abs( 1 - abs(neg[i]) ) );
            }
            return cout<<result,0;
        }
        //************************
        else{
            ll result = 0;
            result =  pos[0]   + 1;
            pos.pop_front();
            for (int i = 0; i < pos.size(); ++i) {
                result = result + ( abs( 1 - pos[i] ) );
            }
            for (int i = 0; i < neg.size(); ++i) {
                result = result + ( abs( 1 - abs(neg[i]) ) );
            }
            return cout<<result,0;
        }
    }
    //*************************************************************
    else{
        ll result = 0;
        for (int i = 0; i < pos.size(); ++i) {
            result = result + ( abs( 1 - pos[i] ) );
        }
        for (int i = 0; i < neg.size(); ++i) {
            result = result + ( abs( 1 - abs(neg[i]) ) );
        }
        return cout<<result,0;
    }
    //********** code ***************
}
 
//****************************************    helping function    ****************************************
inline void _GOM3A_(void){
    fraction(7);
    fast_IO(  author: _GOM3A_ );
    //_setmode(_fileno(stdout) , _O_U8TEXT);
    //string binary = bitset<8>(11).to_string();
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
}