#include <stdio.h>

int main(){
    int fib_number_limit, number1=0, number2=1,itr, number3;
    printf("Enter the number of elements:\n");
    scanf("%d", &fib_number_limit);
    printf("%d\n%d\n", number1, number2);
    for ( itr = 0; itr < fib_number_limit; itr++){
        number3 = number1 + number2;
        number1 = number2;
        number2 = number3;
        printf("%d\n", number3 );
        }
    return 0;
    }
