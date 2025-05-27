#include <stdio.h>
#include <string.h>

int daoNguocChuoi(char str[]) {
	int i;
    int length = strlen(str);
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "Lap trinh C"; // Khai bao chuoi

    printf("Chuoi da khai bao: %s\n", str);
    printf("Chuoi dao nguoc: ");
    daoNguocChuoi(str);

    return 0;
}

