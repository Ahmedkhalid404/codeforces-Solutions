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
int n;
cin >> n;
vector<int>v(n);
    for (int i = 0; i < n ; ++i) {
        cin >> v[i];
    }
    string s;
    cin >> s;
 
//    map<int,pair<char,bool>>t;
//    for (int i = 0; i < (int)s.size() ; ++i) {
//        if(mp[s[i]] == 0){
//            if(t[v[i]].second ){
//                return void(cout<<"NO\n");
//            }
//            mp[s[i]] = v[i];
//            t[v[i]].first = s[i];
//            t[v[i]].second= true;
//        }else{
//            if(v[i]!= mp[s[i]]){
//
//            }
//        }
//    }
//    return void(cout<<"YES\n");
map<int,int>mp;
    for (int i = 0; i < n ; ++i) {
        if(!mp[v[i]]) {
            for (int j = 0; j < n; ++j) {
                if (v[j] == v[i] && s[j] != s[i]) {
                    return void(cout << "NO\n");
                }
            }
            mp[v[i]] = 1;
        }
    }
    return void(cout<<"YES\n");
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