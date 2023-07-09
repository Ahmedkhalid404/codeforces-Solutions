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
    vector<ll>numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    vector< vector<ll> >nums(2,vector<ll>(size));
    nums[0] = {numbers};
    nums[1] = move(numbers);
    Sort(nums[1]);
    vector<vector<ll>> prefix(2,vector<ll>(size,0));
    prefix[0][0] = nums[0][0];
    prefix[1][0] = nums[1][0];
    for (int i = 1; i < size; ++i) {
        prefix[0][i] = prefix[0][i-1] +  nums[0][i];// not sorted
        prefix[1][i] = prefix[1][i-1] +  nums[1][i];// sorted
    }
    ll query;
    cin >> query;
    while(query--)
    {
        ll arr,start,end;
        cin >> arr >> start >> end;
        if(start > end)
            swap(start,end);
        arr--;start--;end--;
        if(start == end)
            cout<<nums[arr][start]<<ln;
        else if(start == 0)
            cout<<prefix[arr][end]<<ln;
        else
            cout<<prefix[arr][end]- prefix[arr][start-1]<<ln;
    }
 
 
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}