#include "stdio.h"
int main(int argc, char const *argv[]) {
        int itr;
        char str[50];
        printf("Enter the string:");
        gets(str);

        for(itr=0; itr<strlen(str); itr++) {
                if((int)str[itr] < 91 && (int)str[itr] > 64) // A - 65 Z-90
                        str[itr]=(char)(((int)str[itr])+32);
                else if((int)str[itr]<123 && (int)str[itr]>96) //a -97 z - 122
                        str[itr]=(char)(((int)str[itr])-32);
        }
        printf("\nThe case reversed string is : %s",str);
        return 0;
}
