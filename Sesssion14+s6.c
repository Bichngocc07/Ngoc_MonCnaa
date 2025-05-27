#include <stdio.h>
#include <ctype.h>
#include <string.h>

int demChuCai(char str[]) {
    int dem = 0;
    int i = 0;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { // Kiem tra ky tu co phai chu cai
            dem++;
        }
    }
    return dem;
}

int main() {
    char str[] = "Lap trinh C 2025!"; // Khai bao chuoi

    printf("Chuoi da khai bao: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", demChuCai(str));

    return 0;
}

