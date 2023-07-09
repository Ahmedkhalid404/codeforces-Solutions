#include <bits/stdc++.h>
#define MAX 500
using namespace std;
 
int main()
{
 int size,range,count=0;
 cin>>size>>range;
 for(int i=0;i<size;i++)
    {
        string num;
        bool flag = true;
        set<int>numSet;
        cin>>num;
        for(int j=0;j<num.size();j++)
        {
            numSet.insert(num[j] - '0');
        }
        if(numSet.size()<range+1)
            continue;
        auto it = numSet.begin();
        for(int j=0;j<range+1;j++)
        {
            if(*it != j)
            {
                flag = false;
            }
            it++;
        }
        if(flag == true)
            count++;
 
    }
    cout<<count;
 
}