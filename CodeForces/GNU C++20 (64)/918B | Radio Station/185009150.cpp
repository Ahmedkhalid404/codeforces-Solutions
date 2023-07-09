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
void RadioStation(){
    ll sizeSemi,sizeWithoutSemi;
    cin >> sizeWithoutSemi >> sizeSemi;
    vector< pair < string, string> > word_withsemi(sizeSemi),word_withOutSemi(sizeWithoutSemi);
    for (int i = 0; i < sizeWithoutSemi; ++i) {
        cin >> word_withOutSemi[i].first >> word_withOutSemi[i].second;
    }
    //******************************
    for (int i = 0; i < sizeSemi; ++i) {
        cin >> word_withsemi[i].first >> word_withsemi[i].second;
        word_withsemi[i].second.pop_back();//to delete ';' :)
    }
    //******************************
    for(int i=0;i<sizeSemi;i++)
    {
        for(int j = 0;j < sizeWithoutSemi ; j++)
        {
            if(word_withsemi[i].second == word_withOutSemi[j].second)
            {
                cout<<word_withsemi[i].first<<" "<<word_withsemi[i].second<<";"<<" #"<<word_withOutSemi[j].first;
                break;
            }
        }
        if(i != (sizeSemi-1))
            cout <<"\n";
    }
}
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
    RadioStation();
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************
//**********************   to sort with second number    **********************
bool sortbyseconde(const  pair<int,int> &a,const pair<int,int> &b)
{
    return a.second>b.second;
}