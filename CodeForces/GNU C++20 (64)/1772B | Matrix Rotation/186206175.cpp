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
    int testCases;
    cin >> testCases ;
    while (testCases--)
    {
        int  arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int tryIt = 5;
        while(tryIt--)
        {
            if(arr[0] < arr[1] && arr[2] < arr[3] && arr[0] < arr[2] && arr[1] < arr[3])
            {
                cout<<"YES"<<ln;
                goto here;
            }
            swap(arr[2],arr[3]);
            swap(arr[0],arr[1]);
            swap(arr[3],arr[0]);
        }
        cout<<"NO"<<ln;
        here:;
    }
    //******    code    ****
    return 0;
}
//****************************************    helping function    ****************************************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}