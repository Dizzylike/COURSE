#include <stdio.h>

int main() {
    unsigned int all;
    int als;
    printf("number");
    scanf("%u", &all);

    for(als = 32; als >= 0; als --) {
        printf("%u", (all >> als) &1);
        if (als % 8 == 0 && als != 0) {
        printf(" ");
        }
    }
    printf("\n");
return 0;
}