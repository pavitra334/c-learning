#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
        int number1[10], number2[10], noofrecords,itr,space_index,temp_number;
        char name1[20], name2[20],temp[20],temp1[20],temp2;

        printf("Enter the name of first student:");
        scanf("%s",&name1);
        printf("Enter the name of second student:");
        scanf("%s",&name2);
        printf("Enter the number of records:\n");
        scanf("%d",&noofrecords);
        for (itr = 0; itr < noofrecords; itr++) {
                // gets(temp);
                printf("Enter the record:");
                scanf("%s %s",temp, temp1);
                printf("%s\n",);
                // for(itr2 = 0; itr2<strlen(temp); itr2++)
                //         if(temp[itr2]== " ") {
                //                 space_index = itr2;
                //                 break;
                //         }ramesh 122
                // for(itr2=0; itr2<space_index; itr2++)
                //         temp1[itr2]=temp[itr2];
                // for(itr2=space_index;itr2<strlen(temp);itr2++){
                //   temp=temp[space_index];
                //   temp_number=
                // }
                if(strcmp(name1,temp)) {
                        printf("Name1 %s is %d : %s\n",temp,(int)temp1,name1);
                }
                else{
                        printf("Name2 %s is %d : %s\n",temp,(int)temp1,name2);
                }

        }
        return 0;
}
