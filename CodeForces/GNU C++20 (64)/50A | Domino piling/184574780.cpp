/*
 *  author:  Ahmed khaled
 * */
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define SortSec(x) sort(all(x),sortbyseconde)
#define Reverse(x) reverse(all(x))
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define  ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
//freopen("out.txt","r",stdin);
//freopen("out.txt","w",stdout);
using namespace std;
//****************************************    prototypes    ****************************************bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO( author: Gom3a );// make cout and cin more fast
    //****************    code    ************************
    //freopen("out.txt", "r", stdin);
    ll num1,num2;
    cin >> num1 >> num2 ;
    cout << ( num1 * num2 ) / 2 ;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}