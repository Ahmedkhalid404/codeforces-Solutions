#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x))
#define Reverse(x) reverse(all(x))
#define yes cout<<"yes"
#define Yes cout<<"YES"
#define no cout<<"no"
#define No cout<<"NO"
#define ln endl
#define MAX 500
#define tryIt(x) ll testCases = (x); while((testCases)--)
#define loop(a,b) for(int i(a);i<=(b);i++)
#define loopRev(a,b) for(int i(a);i>=(b);i--)
#define fraction cout<< fixed <<showpoint <<setprecision
#define fast_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
using namespace std;
//****************************************    prototypes    ****************************************
int main() {
    fraction(1);//how many digits after the decimal point
    fast_IO();// make cout and cin more fast
    //****************    code    ************************
    ll test;
    cin >> test;
    while(test--){
        ll size,zeros=0,index=-1;
        bool flagzero = false;
        cin >> size;
        vector<int>bits(size);
        vector<int>firstzero(size);
        vector<int>lastOne(size);
        for(int i=0;i<size;i++)
        {
            cin >> bits[i];
            if(!flagzero && bits[i] == 0)
            {
                flagzero = true;
                firstzero[i] = 1;
            }
            else
            {
                firstzero[i] = bits[i];
            }
            //***************************
            lastOne[i] = bits[i];
            if(bits[i] == 1)
            {
                index = i;
            }
            if(i==size-1 && index != -1)
            {
                lastOne[index] = 0;
            }
        }
        ll count1=0,count2=0,count3=0;
        bool flag1=false,flag2=false,flag3=false;
        ll total1 = 0,total2 = 0,total3 = 0;
        for(int i=0;i<size;i++)
        {
            if( bits[i] == 1 && !flag1)
            {
                for(int j=i;j<bits.size();j++)
                {
                    if(bits[j]==0)
                    {
                        count1++;
                    }
                }
 
                flag1 = true;
                total1 = count1;
            }
            else if(flag1)
            {
                if(bits[i] == 1)
                    total1 = total1 + count1;
                else if(bits[i] == 0)
                    count1--;
            }
 
            //*******************
            if( firstzero[i] == 1 && !flag2)
            {
                for(int j=i;j<firstzero.size();j++)
                    if(firstzero[j]==0)
                        count2++;
                flag2 = true;
                total2 = count2;
            }
            else if(flag2)
            {
                if(firstzero[i] == 1)
                    total2 = total2 + count2;
                else if(firstzero[i] == 0)
                    count2--;
            }
            //********************
            if( lastOne[i] == 1 && !flag3)
            {
                for(int j=i;j<lastOne.size();j++)
                    if(lastOne[j]==0)
                        count3++;
                flag3 = true;
                total3 = count3;
            }
            else if(flag3)
            {
                if(lastOne[i] == 1)
                    total3 = total3 + count3;
                else if(lastOne[i] == 0)
                    count3--;
            }
 
        }
        cout<<max({total1,total2,total3})<<ln;
    }
    //****************    code    ************************
    return 0;
}
//****************************************    helping function    ****************************************