#include <stdio.h>
#include <string.h>

int demSoTu(char str[]) {
    int dem = 0;
    int trongTu = 0;
    int i = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            if (!trongTu) {
                dem++;
                trongTu = 1;
            }
        } else {
            trongTu = 0;
        }
    }

    return dem;
}

int main() {
    char str[] = "hello world"; // Khai bao chuoi

    printf("Chuoi da khai bao: %s\n", str);
    printf("So tu trong chuoi: %d\n", demSoTu(str));

    return 0;
}

