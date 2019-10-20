#include <stdio.h>
int main(int argc, char const *argv[]) {
        // pointers : value : address
        int array[10] = {1,3,2,4,5,6,7,8,9,0};
        int *b;
        int itr, count = 10;
        // printf("%d %u\n",a,&a);
        b = &array;
        // printf("%d %u %d\n",a,&b,*b);
        // printf("%d %d\n",sizeof(a), sizeof(b));
        // *b = NULL;
        printf("%d %u\n",array[0],*++b);
        printf("%d\n", *b);
        b = &array;
        for ( itr = 0; itr < 10; itr++) {
                printf("Array[%d] = %d\n",itr,*b);
                b++;
        }
        .cpp
        return 0;
}
