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
    ll test;
    cin >> test;
    while(test--){
        ll size;
        cin >> size;
        //vector<ll>even,odd;
        deque<ll>numbers(size);
        bool flagAorB = false;
        for(int i = 0;i<size;i++)
        {
            cin >> numbers[i];
        }
        ll alice=0,pob = 0;
        sort(numbers.rbegin(),numbers.rend());
        while(numbers.size())
        {
            if(!flagAorB)//alice
            {
                if(!(numbers[0] % 2))
                {
                    alice += numbers[0];
                }
                numbers.pop_front();
                flagAorB = true;
            }
            else//pob
            {
                if((numbers[0] % 2))
                {
                    pob += numbers[0];
                }
                numbers.pop_front();
                flagAorB = false;
            }
        }
        if(alice == pob)
            cout<<"Tie\n";
        else if(alice > pob)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }
    return 0;
 
}
 
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}
// 1
// 2