#include <iostream>
#include <stdio.h>
#define MAX 500000
using namespace std;
 
int main()
{
    int freq[MAX]={0};
    int size;
    cin >> size;
    int currentNum = size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        freq[num] = 1;
        while (freq[currentNum])
        {
            cout << currentNum << " ";
            currentNum--;
        }
        cout << endl;
    }
}