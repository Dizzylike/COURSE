#include <stdio.h>

int main() {
unsigned int number;
unsigned int byte;
unsigned int third_byte = (number >> 16) & 0xFF;
printf("please number");
scanf("%u", &number);
printf("3 byte %u\n", third_byte);

printf("Please new 3_byte");
scanf("%u", &byte);

number &= ~(0xFF << 16);
number |= (byte & 0xFF) << 16;
printf("res: %u\n", number);
return 0;

}