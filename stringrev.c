#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        char str1[100],str2[100];
        int len,itr1,itr2;
        scanf("%s",str1);
        len = strlen(str1);
        // printf("Length %d\n",len);
        for (itr1 = 0,itr2 = len-1; itr1 < len,itr2>=0; itr1++,itr2--) {
                str2[itr2]=str1[itr1];
        }
        printf("String %s",str2);
        return 0;
}
