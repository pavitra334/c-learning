#include<stdio.h>
int main()
{
//check the number is prime or not//
   int n, i, count=0;

    printf("enter the number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    { if(n%i==0)
      {
      count++; }}
{//optional curly bracis//
    if(count==2)
    {
     printf("number is prime number\n");}
        else
        {printf("the number is not a prime number\n");
      }}

  return 0;
  }
