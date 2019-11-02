#include "stdio.h"

int main(int argc, char const *argv[]) {
        int num1=0, num2=0;
        scanf("%d",&num1);
        while (num1) {
                num2 += (num1%10);   //1234
                num2 *= 10;   // 40
                num1 /= 10;  //123
        }
        num2/=10;
        printf("The reversed number is %d",num2);
        return 0;
}
