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
#define ln endl
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
    string s;
    string hello = "hello";
    cin >> s;
    if(s.size() < hello.size())
        No;
    else
    {
        int j=0;
        for(int i=s.find('h');i<s.size();i++)
        {
            if(j == hello.size())
                break;
            if(s[i] == hello[j])
            {
                j++;
            }
        }
        if( j == hello.size() )
            Yes;
        else
            No;
    }
 
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************