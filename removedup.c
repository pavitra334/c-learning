#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        int list1[100];
        int itr1,itr2,limit;

        scanf("%d",&limit);
        for (itr1 = 0; itr1 < limit; itr1++) {
                scanf("%d",&list1[itr1]);
        }
        for (itr1 = 0; itr1 < limit; itr1++) {
                for (itr2 = itr1+1; itr2 < limit; itr2++) {
                        if (list1[itr1]== -1 ) {
                                break;
                        }
                        else if(list1[itr2] == -1) {
                                continue;
                        }
                        else if (list1[itr1] == list1[itr2]) {
                                list1[itr2]=-1;
                        }
                }
        }

        printf("\nThe array is : ");
        for(itr1 = 0; itr1<limit; itr1++) {
                if (!(list1[itr1] == -1))
                        printf("%d ",list1[itr1]);
        }
        return 0;
}
