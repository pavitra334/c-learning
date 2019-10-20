
#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n);
m=n/2;
i=2;
i<=m;
{
if(n%i==0)
{
printf("Number is not prime");
flag=1;

}
}
if(flag==0)
printf("Number is prime");
return 0;
 }
