#include <stdio.h>

int main() {
    int N;
    printf("Please number: N");
    scanf("%d", &N);

    int max[N][N];
    int n = 1;
    int t = 0;
    int l = 0;
    int a = N - 1;
    int c = N - 1;

    while (t <= a && l <= c) {
        for (int i = l; i <= c; i++) {
            max[t][i] = n++;
        }
        t++;

        for (int i = t; i <= a; i++) {
            max[i][c] = n++;       
        }
        c--;
        if (t <= a) {
            for (int i = c; i >= l; i--) {
                max[a][i] = n++;
            }
            a--;
        }
        if (l <= c) {
            for (int i = a; i >= t; i--) {
                max[i][l] = n++;
            }
            l++;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", max[i][j]);
        }
        printf("\n");
    }

    return 0;
}