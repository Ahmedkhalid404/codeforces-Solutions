#include<stdio.h>
 
int main()
{
    long long int fun;
     scanf("%lli",&fun);
     if(fun%2==0)
         fun=fun/2;
     else
         fun=(fun/2+1)*-1;
     printf("%lli",fun);        
                return 0;
}