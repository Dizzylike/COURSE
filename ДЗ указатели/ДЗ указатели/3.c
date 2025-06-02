#include <stdio.h>

int main(void) {

    int a[10];

    int *xp = a;

    for(int i = 0; i < 10; i++){
    *(xp + i) = i + 1;
    printf("%d", *xp , *(xp + i));
    }
    printf("\n");
    return 0;
}
