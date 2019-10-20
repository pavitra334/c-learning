#include<stdio.h>
void main()
{int n, count, i;
//how many prime numbers are there in the entered limit//
printf("enter the limit");
scanf("%d",&n);
for(i=1; i<=n;i++)
{if(n%i==0)
{count++;}}
{
printf("the total divisible number is %d:", count);}


}
