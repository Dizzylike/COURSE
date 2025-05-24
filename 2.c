#include <stdio.h>

int main (void) {

    int M;
    printf("Введите размер ");
    scanf("%d", &M);

    int rep[M];
    printf("Введите числа через пробел %d\n", M);
    for(int i = 0; i < M; ++i) {
    scanf("%d", &rep[i]);
    }
    for(int j = M - 1; j >= 0; j--) {
        printf("%d ",rep[j]);
    }
    printf("\n");

    return 0;
}