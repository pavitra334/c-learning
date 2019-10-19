#include<stdio.h>
int main()
{//print the number reverse way
  int i, j;
for(j=100; j>=1; j--)
{  for(i=j; i>=1; i-=10)
  printf("%4d",i);
printf("\n");
}
  return 0;
}
