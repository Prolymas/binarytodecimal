#include <stdio.h>

int main(void) {
     int num, binary_val, decimal_val = 0, base = 1, rem;
     printf("Enter a binary number: \n");
     scanf("%d", &num);
     binary_val = num;
     while (num > 0) {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        base = base * 2;
     }

     printf("The binary number is: %d\n", binary_val);
     printf("The decimal equivalent is: %d\n", decimal_val);
     return 0;
}
