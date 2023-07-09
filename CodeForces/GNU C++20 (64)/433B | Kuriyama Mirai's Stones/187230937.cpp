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
    fraction(7);
    fast_IO(  author: _GOM3A_ );
#ifdef ONPC
    freopen("output.txt","w",stdout);
    freopen("input.txt","r",stdin);
#endif
    ll size;
    cin >> size;
    ll arr[2][size];
    ll prefix[2][size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[0][i];
        arr[1][i] = arr[0][i];
    }
    sort(arr[1] , arr[1]+size);
    ll sum = 0 , sumS = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[0][i];
        sumS += arr[1][i];
        prefix[0][i] = sum;
        prefix[1][i] = sumS;
    }
    ll query;
    cin >> query;
    while(query--)
    {
        ll where,start,end;
        cin >> where >> start >> end;
        if(start > end)
            swap(start,end);
        where--;start--;end--;
        if(start == end)
            cout<<arr[where][start]<<ln;
        else if(start == 0)
            cout<<prefix[where][end]<<ln;
        else
            cout<<prefix[where][end]- prefix[where][start-1]<<ln;
    }
 
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
/*
 * 1 2 3 4 5
 * 1 3 6 10 15
 * if(start != 0)
 *  sum = end - (start-1)
 * else
 *  sum = end - start
 *
 * */