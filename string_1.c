#include <stdio.h>
#include<string.h>
int main(void) {
    char name[] = "HAB";
    char name2[10] = {'H','A','B', 'C', 'D','g','f','k','\0'};
    char name3[10];
    printf("%s\n",name);
    printf("%d", sizeof(name));
    printf("%s",name2);
    printf("%d\n", sizeof(name2));

    strcpy(name3,name2);
    printf("%s\n",name3);
    strcat(name3,name2);
    printf("%s",name3);

    // printf("%d", sizeof(name));

    printf("%d",strlen(name3));

    printf("%d",strcmp(name3,name2));

    printf("%d",strchr(name3,'f'));
	return 0;
}
