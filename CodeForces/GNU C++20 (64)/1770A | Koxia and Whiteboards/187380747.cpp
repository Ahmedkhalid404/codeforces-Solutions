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
#define what_is(x) cerr << #x << " is " << x << endl;
using namespace std;
 
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
void printN(ll n ,char c);
struct dataType{
    static vector<ll>vec;
    static set<ll>se;
};
int main() {
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
    ll test;
    cin >> test;
    while(test--){
        ll n,m;
        cin >> n >> m;
        vector<ll>numbers(n),operation(m);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> operation[i];
        }
        for (int i = 0; i < m; ++i) {
            *min_element(numbers.begin(), numbers.end()) = operation[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            sum = numbers[i] + sum;
        }
        cout<<sum<<ln;
    }
 
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}