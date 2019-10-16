#include <stdio.h>

int main()

{
  int n1=0, n2=1, i, n3, number;

  printf("Enter the number of elements:\n");
  scanf("%d", &number);

  printf("%d\n%d\n", n1, n2 );


  for (i=0; i<number; i++)
   {

    n3=n1+n2;
     n1=n2;
     n2=n3;



       printf("%d\n", n3 );
    /* code */
  }
  return 0;
}
