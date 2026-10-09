// Question: print the table of 'n' . Here n is a integer which user will input .

#include <stdio.h>
int main()
{
    int n;
    printf("the table of n: ");
    scanf("%d",&n);
  int i;
for(i=n;i<=n*10;i=i+n){printf("%d ",i);}
return 0 ;
}
