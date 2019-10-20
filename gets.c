#include "stdio.h"
int main(int argc, char const *argv[]) {
        char a[10],b[10];
        int num;
        printf("Enter the string\n");
        gets(a);
        printf("Enter the string\n");
        scanf("%s%d",b,&num);
        printf("The string with gets is : %s\n",a);
        printf("The string is : %s %d\n",b,num);
        return 0;
}
