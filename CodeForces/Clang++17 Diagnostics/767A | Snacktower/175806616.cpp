#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int arr[500000];
    int size,max,ln=0;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr[num] = i;
    }
    for (int i = size; i > 0; i--)
    {
        max = arr[i];
        if (max > ln)
        {
            int dif = max - ln;
            for (int j = 0; j < dif; j++)
            {
                cout << endl;
                ln++;
            }
            
        }
        cout << i << " ";
        
    }
}