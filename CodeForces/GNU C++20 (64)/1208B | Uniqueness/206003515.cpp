#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
 
vector<ll>nums;
bool valid(ll md, map<ll,ll>freq)
{
    ll size = nums.size();
    map<ll,ll>cpy = freq;
    ll mn = INFINITY;
    for (int i = 0; i < size; ++i) {
        if (freq[nums[i]] > 1)
        {
            //cout<<i<<" : ";
            ll cnt = 0;
            ll sz = freq.size();
            ll allSize = nums.size();
            bool flag = false;
            for (int j = i; j < size; ++j) {
                //cout<<allSize<<" "<<freq[ nums[j] ]<<" "<<nums[j]<<ln;
                if( freq[ nums[j] ] > 1 )
                {
                    freq[ nums[j] ]--;
                    allSize--;
                }
                cnt++;
                if( allSize == sz )
                {
                    flag = true;
                    break;
                }
            }
            if( flag )
            {
                mn = (ll)min( mn , cnt );
            }
            freq = cpy;
        }
    }
    //cout<<"mn = "<<mn<<ln;
    return  mn <= md;
}
 
int main() {
    HelloWorld('♡');
    ll size;
    cin >> size;
    nums.resize( size );
    map<ll,ll>freq;
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
        freq[ nums[i] ]++;
    }
    if( freq.size() == size )
        return cout<<0,0;
    //valid( 7 , freq );
    ll st = 1;
    ll ed = 2000;
    ll md , ans = -1;
    while( st <= ed )
    {
 
        md = (st + ed) / 2;
        if( valid(md , freq) )
        {
            ans = md;
            ed = md -  1;
        }
        else
        {
            st = md + 1;
        }
    }
    cout<<ans;
    return 0;
}