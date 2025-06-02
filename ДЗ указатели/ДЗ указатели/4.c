#include <stdio.h>
#include <string.h>

int main() {
    static char a[100];
    static char b[100];

    printf("Введите строку: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; 

    printf("Введите подстроку: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    char *pos = strstr(a, b);
    if (pos != NULL) {
        printf("Подстрока найдена: %s\n", pos);
    } else {
        printf("Подстрока не найдена.\n");
    }

    return 0;
}