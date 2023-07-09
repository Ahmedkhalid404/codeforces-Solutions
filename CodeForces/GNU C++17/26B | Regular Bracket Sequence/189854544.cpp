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
//****************************************    prototypes    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
void f(int x = 8);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
    //****************    code    ************************
    stack<char>prackets;
    string s;
    int count = 0;
    cin >> s;
    for(int i=0;i<s.size();i++)
        {
            if( s[i] == '(' )
                {
                    prackets.push(s[i]);
                }
            else if( s[i] == ')' && (!prackets.empty()) )
            {
                if(prackets.top() == '(' )
                {
                    prackets.pop();
                    count += 2;
                }
            }
        }
    cout<<count;
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}