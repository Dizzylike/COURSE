#include <stdio.h>
int main() {
int number1, number2;
     printf("Pleace number");
    scanf("%d", &number1);
while(number1 > 0) {
number2 += number1 &1;
number1 >>= 1;
}
printf("Result: %d\n", number2);
return 0;
}

