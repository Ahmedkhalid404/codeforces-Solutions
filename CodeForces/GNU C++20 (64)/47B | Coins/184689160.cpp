/*
 *  author:  Ahmed khaled
 * */
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define SortSec(x) sort(all(x),sortbyseconde)
#define Reverse(x) reverse(all(x))
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define  ln endl
#define MAX 500
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO(x) ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
//freopen("out.txt","r",stdin);
//freopen("out.txt","w",stdout);
using namespace std;
//****************************************    prototypes    ****************************************//
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b);
int main() {
    fraction(0);//how many digits after the decimal point
    fast_IO( author: Gom3a );// make cout and cin more fast
    //****************    code    ************************
    //freopen("out.txt", "r", stdin);
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3 ;
    if( s2.find('A') != -1 && s2.find('B') != -1 )
    {
        swap(s1,s2);
    }
    else if( s3.find('A') != -1 && s3.find('B') != -1 )
    {
        swap(s1,s3);
    }
    //**********************************************************
    if( s3.find('C') != -1 && s3.find('B') != -1 )
    {
        swap(s2,s3);
    }
    //**********************************************************
    if( s1[1] != '>' )
    {
        swap(s1[0],s1[2]);
        s1[1] = '>';
    }
    //***************
    if( s2[1] != '>' )
    {
        swap(s2[0],s2[2]);
        s2[1] = '>';
    }
    //***************************
    if( s3[1] != '>' )
    {
        swap(s3[0],s3[2]);
        s3[1] = '>';
    }
    //*******************************
    if(s1[0] == 'A' && s3[0] == 'A')
    {
        if( s2[0] == 'B' )
        {
            return cout <<"CBA",0;
        }
        else
        {
            return cout <<"BCA",0;
        }
 
    }
    if(s1[0] == 'B' && s2[0] == 'B')
    {
        if( s3[0] == 'A' )
        {
            return cout <<"CAB",0;
        }
        else
        {
            return cout <<"ACB",0;
        }
 
    }
    if(s2[0] == 'C' && s3[0] == 'C')
    {
        if( s1[0] == 'B' )
        {
            return cout <<"ABC",0;
        }
        else
        {
            return cout <<"BAC",0;
        }
 
    }
    cout<<"Impossible";
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************//
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}