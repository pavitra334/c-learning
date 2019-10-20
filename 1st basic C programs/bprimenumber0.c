#include <stdio.h>

int main () {



   int i, j, k;

    int matrix1[3][3][3], matrix2[3][3][3], matrix3[3][3][3], matrixsum[3][3][3];

printf("Please enter the value of the matrix1:\n");

   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 2; j++ ) {
          for(k=0; k<2; k++)
{
          scanf("%d",&matrix1[i][j][k]);

      }

   }}

    printf("Please enter the value of the matrix2:\n");

   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 2; j++ ) {
        for(k=0; k<2; k++)
        {
          scanf("%d",&matrix2[i][j][k]);

      }
}
   }

   printf("Please enter the value of the matrix3:\n");

      for ( i = 0; i < 2; i++ ) {

         for ( j = 0; j < 2; j++ ) {
           for(k=0; k<2; k++)
           {
             scanf("%d",&matrix3[i][j][k]);

         }

      }}


    printf("The value of the matrixsum:\n");

   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 2; j++ ) {
        for(k=0; k<2; k++)
        {
        matrixsum[i][j][k] = matrix1[i][j][k] + matrix2[i][j][k] + matrix3[i][j][k];

        printf("%d\t",matrixsum[i][j][k]);


}
}

printf("\n\n\n");
}


for(i=0;i<2;i++){

    for(j=0;j<2;j++){

      for(k=0; k<2; k++)
      {
        printf("%d\t",matrix1[i][j][k]);

    }
}}
printf("\n");
for(i=0;i<2;i++){

    for(j=0;j<2;j++){

      for(k=0; k<2; k++)
      {
        printf("%d\t",matrix2[i][j][k]);

    }  printf("\n");
}



printf("\n + \n + \n");
}
for(i=0;i<2;i++){

    for(j=0;j<2;j++){
      for(k=0; k<2; k++)
      {
        printf("%d\t",matrix3[i][j][k]);

    }    printf("\n");


}
}

printf("\n=\n=\n");

for(i=0;i<2;i++){

    for(j=0;j<2;j++){
      for(k=0; k<2; k++)
      {
        printf("%d\t",matrixsum[i][j][k]);

    }  }  printf("\n");



}



   return 0;

}
