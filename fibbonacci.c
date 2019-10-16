#include<stdio.h>
int main()
{
int n, first=0, second=1, next, i;
printf("Enter the number of terms\n");
scanf("%d", &n );
printf("First %d terms of Fibonacci series are:\n", n);
for (i=0; i<=n; i++) {
  if (i<=1)
next=i;
else
{next=first+second;
first=second;
second=next;
}
printf("%d\n", next );  /* code */
}
return 0;
}
/*  int i, n, t1=0, t2=1, nextTerm;
  printf("enter the number of terms:" );
scanf("%d", &n );
printf("fibonnacci series are:" );
for(i=1; i<=n; ++i)
{
  printf("%d\n",t1 );
  nextTerm=t1+t2;
  t1=t2;
  t2=nextTerm;
}
return 0;
}

  /* code */
