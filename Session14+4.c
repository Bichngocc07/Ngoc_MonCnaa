#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Lap trinh C"; // Khai bao chuoi
    char kyTu;
    int dem = 0;
    int i = 0;

    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap mot ky tu: ");
    scanf(" %c", &kyTu); // Nhap ky tu tu nguoi dung

    // Dem so lan xuat hien cua ky tu
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}

