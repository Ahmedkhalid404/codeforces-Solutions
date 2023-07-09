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
#define  ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
 
int main() {
    fraction(6);
    fast_IO(  author:  Gom3a );
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    //******    code    ****
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<(s[0]+s[2])-(2*'0')<<endl;
    }
    //******    code    ****
    return 0;
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}