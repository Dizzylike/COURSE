#include <stdio.h>

int main (void) {

    int a;
    int b;
printf("Please number");
scanf("%u", &a);
printf("new 3 byte");
scanf("%u", &b);


unsigned char *xp = (unsigned char*)&a;
*(&xp[2]) = b;


printf("new byte: %d\n", a);
return 0;
}