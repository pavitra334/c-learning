#include "stdio.h"
#define LIMIT 256
int main(int argc, char const *argv[]) {
        int itr=0;
        printf("%The ascii values are:\n");
        for(itr=0; itr<LIMIT; itr++)
                printf("ASCII value of %c is : %d\n",itr,itr);
        return 0;
}
