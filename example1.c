#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
        char a[10]={'a','b','c','d','e','r','y'};
        char b[10];
        // strncpy(b,a[1],3);
        substring(a,b,1,3);
        printf("%s\n",b);
        return 0;
}
