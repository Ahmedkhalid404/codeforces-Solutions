#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define  el '\n'
#define all(x) x.begin(),x.end()
ll mod = 1e9+7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
 
bool cmp(const pair<int, int>& a,const pair<int, int>& b){
    if(a.first == b.first)
        return a.second > b.second;
 
        return a.first < b.first;
}
 
 
//bool cmp(const string& a,const string& b){return a+b < b+a;}
 
 
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};
const char dc[4]={'U','R','D','L'};
#define HereWeGo() ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
 
 
 
 
void RunCase() {
int n,q;
cin >> n >> q;
int a[n];
int od=0;
int ev=0;
ll sum =0;
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
        if(a[i]%2==0){ev++;}
        else od++;
        sum+=a[i];
 
    }
    while (q--){
        int u,v;
        cin >> u >> v;
        if(u==0){
            sum+=(ev*v);
            if(v%2==1){
               od+=ev;
               ev=0;
            }
 
            cout<<sum<<el;
        }
        else{
            sum+=(od*v);
            if(v%2==1){
                ev+=od;
                od = 0;
            }
 
            cout<<sum<<el;
        }
    }
 
 
}
 
 
 
 
 
 
 
 
int main(){
    HereWeGo();
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
 
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        //cout<<"Case #:"<<i+1<<el;
 
        RunCase();
 
    }
    return 0;
 
}