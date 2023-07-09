#include <stdio.h>
 
int main()
{
 int n,tmp;
 scanf("%d",&n);
 if(n%2==0)
 {
  puts("No");
  return 0;
 }
 scanf("%d",&tmp);
 if(tmp%2==0)
 {
  puts("No");
  return 0;
 }
 while(--n)
  scanf("%d",&tmp);
 if(tmp%2==0) puts("No");
 else puts("Yes");
}