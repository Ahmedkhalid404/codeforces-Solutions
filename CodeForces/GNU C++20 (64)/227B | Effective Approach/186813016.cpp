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
        ll size;
        cin >> size;
        map<ll,ll>numbers;
        map<ll,ll>::iterator it = numbers.begin();
        for (ll i = 0; i < size; ++i) {
            ll num;
            cin >> num;
            it = numbers.emplace_hint(it, make_pair(num,i));
        }
        ll query;
        cin >> query;
        ll start = 0,end = 0;
        while(query--){
            ll n;
            cin >> n;
            start += numbers[n]+1;
            end   = end + (size - numbers[n]);
 
            }
        cout<<start<<" "<<end;
        return 0;
 
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
//BIVG BIVG