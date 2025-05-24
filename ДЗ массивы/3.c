#include <stdio.h>
 int main (void) {
    char game_pole[3][3] = {1, 1, 1, 1, 1, 0, 1};

    for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j)
    printf(" %d ", game_pole[i][j]);
    printf("\n");
    }
    return 0;
 }