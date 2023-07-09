/*
 *  Show me your beautiful smile :)
 *
 *  author:  Ahmed khaled
 *
 * */
#include <bits/stdc++.h>
#include <conio.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define  ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
//****************************************    prototypes    ****************************************
//bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO(  author:  Gom3a );// make cout and cin more fast
//#ifdef ONPC//to don't use file in online judge
    //freopen("IO_file.txt","r",stdin);//to read from 'IO_file.txt' file
//#endif
    //freopen("IO_file.txt","w",stdout);//to output in 'IO_file.txt' file
    //****************    code    ************************
    ll testCases;
    cin >> testCases;
    while(testCases--)
    {
        ll arr[28]={0};
        ll size;
        cin >> size;
        for (int i = 0; i < size; ++i) {
            string word;
            cin>>word;
            for(int j=0;j<word.size();j++)
            {
                arr[  word[j] - 'a'  ]++;
            }
        }
        for(int i=0;i<28;i++)
        {
            if(arr[i] % size != 0)
            {
                No<<ln;
                goto here;
            }
        }
        Yes<<ln;
        here:;
    }
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
//**********************   to sort with second number    **********************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}