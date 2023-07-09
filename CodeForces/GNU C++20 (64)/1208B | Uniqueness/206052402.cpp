#include <bits/stdc++.h>
using namespace std;
#define HelloWorld(x)           ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<< fixed <<showpoint <<setprecision(7)
#define ln                      '\n'
typedef long long               ll;
 
void BubbleSort(vector<ll>&numbers){
    ll size = numbers.size();
    ll cnt = 0;
    for (int i = 0; i < size; ++i) {
        bool isSwap = false;
        for (int j = 0; j < size - 1 - cnt; ++j) {
            if( numbers[j] > numbers[j+1] )
            {
                isSwap = true;
                swap( numbers[j] , numbers[j + 1] );
            }
        }
        if( !isSwap )
            break;
        cnt++;
    }
}
 
void SelectionSort(vector<ll>&numbers){
    ll size = numbers.size();
    for (int i = 0; i < size; ++i) {
        ll mn = i;
        for (int j = i + 1; j < size; ++j) {
            if( numbers[j] < numbers[ mn ] )
            {
                mn = j;
            }
        }
        swap( numbers[mn] , numbers[i] );
    }
}
 
void InsertionSort(vector<ll>&numbers){
    ll size = numbers.size();
    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0; --j) {
            if( numbers[j] < numbers[j - 1] )
                swap( numbers[j] , numbers[j - 1] );
            else
                break;
        }
    }
}
 
void Merg(vector<ll>&numbers,ll l,ll md,ll r)
{
    ll sizeLeftSide = md - l + 1;
    ll sizeRightSide = r - md;
    vector<ll>leftSide( sizeLeftSide ) , rightSide( sizeRightSide );
    for (int i = l; i <= md; ++i) {
        leftSide[i - l] = numbers[i];
    }
    for (int i = md + 1; i <= r; ++i) {
        rightSide[i - ( md + 1 )] = numbers[i];
    }
    ll idxOfLeftSide = 0 , idxOfRightSide = 0;
    ll idxOfOriginArr  = l;
    while( (idxOfLeftSide < sizeLeftSide) && (idxOfRightSide < sizeRightSide) )
    {
        if( leftSide[ idxOfLeftSide ] < rightSide[ idxOfRightSide ] )
        {
            numbers[ idxOfOriginArr ] = leftSide[ idxOfLeftSide ];
            idxOfLeftSide++;
        }
        else
        {
            numbers[ idxOfOriginArr ] = rightSide[ idxOfRightSide ];
            idxOfRightSide++;
        }
        idxOfOriginArr++;
    }
    while( idxOfLeftSide < sizeLeftSide )
    {
        numbers[ idxOfOriginArr ] = leftSide[ idxOfLeftSide ];
        idxOfLeftSide++;
        idxOfOriginArr++;
    }
    while( idxOfRightSide < sizeRightSide )
    {
        numbers[ idxOfOriginArr ] = rightSide[ idxOfRightSide ];
        idxOfRightSide++;
        idxOfOriginArr++;
    }
}
void MergeSort(vector<ll>&numbers,ll l,ll r){
    if( l < r )
    {
        ll md = (l + r) / 2;
        MergeSort(numbers,l,md);
        MergeSort(numbers,md+1,r);
        Merg(numbers,l,md,r);
    }
}
 
vector<ll>nums;
ll valid(ll md, map<ll,ll>freq)
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
    return  mn;
}
 
 
int main() {
    HelloWorld('♡');
    //vector<ll>numbers = {90,80,70,60,50,40,30,20,10,-5,66};
    //BubbleSort( numbers );
    //SelectionSort( numbers );
    //InsertionSort( numbers );
    //MergeSort( numbers , 0 , numbers.size() - 1 );
//    for(auto it : numbers)
//        cout<<it<<" ";
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
    cout<<valid( 2000 , freq );
    return 0 ;
}