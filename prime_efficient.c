#include <stdio.h>
#include "time.h"
int main(int argc, char const *argv[]) {
        clock_t begin = clock();
        int limit,prime,itr=0,itr2=0,flag = 1;
        double time_spent;
        printf("Enter the limit of Prime number that you want:");
        scanf("%d",&limit);
        printf("The prime numbers upto %d are : ",limit);
        if (limit<=0)
                printf(" No prime numbers");
        else if (limit == 1)
                printf("%d",1);
        else if (limit == 2)
                printf("%d %d",1,2);
        else
                printf("%d %d %d ",1,2,3);
        for (itr = 4; itr<=limit; itr++) {
                flag = 1;
                for(itr2=2; itr2<=(itr/2)+1; itr2++)
                        if(itr%itr2==0) {
                                flag = 0;
                                break;
                        }
                if(flag == 1)
                        printf("%d ",itr);
        }
        clock_t end = clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("Execution time is : %lf",time_spent);
        return 0;
}
