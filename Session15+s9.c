#include <stdio.h>
#include <string.h>

int xoa_ky_tu(char *chuoi, char ky_tu_xoa) {
    int j = 0;
    int i = 0;
    for (i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] != ky_tu_xoa) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; 
}

int main() {
    char chuoi[100], ky_tu_xoa;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu_xoa);

    xoa_ky_tu(chuoi, ky_tu_xoa);

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ky_tu_xoa, chuoi);

    return 0;
}

