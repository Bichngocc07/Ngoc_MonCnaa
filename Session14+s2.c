#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
    char str[] = "Lap trinh C"; // Khai bao chuoi

    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi:\n");

    for (i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]); // In tung ky tu cach nhau mot dau cach
    }

    printf("\n");
    return 0;
}

